#!/usr/bin/env pwsh
[CmdletBinding()]
param(
    [string]$Workspace = (Get-Location).Path,
    [string]$Generator = "Visual Studio 17 2022",
    [string]$Architecture = "x64"
)

$ErrorActionPreference = "Stop"

$PgoDataDir = Join-Path $Workspace "pgo-data"
$BuildGenDir = Join-Path $Workspace "Build-Gen"
$BuildDir = Join-Path $Workspace "Build"

if (Test-Path $BuildGenDir) { Remove-Item -Recurse -Force $BuildGenDir }
if (Test-Path $BuildDir)    { Remove-Item -Recurse -Force $BuildDir }
if (Test-Path $PgoDataDir)  { Remove-Item -Recurse -Force $PgoDataDir }
New-Item -ItemType Directory -Path $PgoDataDir | Out-Null

Write-Host "=== Configure - PGO Generate ===" -ForegroundColor Cyan
cmake -S . -B $BuildGenDir `
    -G $Generator `
    -A $Architecture `
    -DCMAKE_BUILD_TYPE=Release `
    -DPGO_MODE=GENERATE `
    "-DPGO_DATA_DIR=$PgoDataDir"
if ($LASTEXITCODE -ne 0) { throw "CMake configure (Generate) failed" }

Write-Host "=== Build - PGO Generate ===" -ForegroundColor Cyan
cmake --build $BuildGenDir --config Release -v
if ($LASTEXITCODE -ne 0) { throw "CMake build (Generate) failed" }

Write-Host "=== Training run ===" -ForegroundColor Cyan
$Bin = Get-ChildItem -Path $BuildGenDir -Filter "StringInt-Benchmarks.exe" -Recurse `
    | Select-Object -First 1
if (-not $Bin) {
    throw "StringInt-Benchmarks.exe not found under $BuildGenDir"
}
Write-Host "Found binary: $($Bin.FullName)"
& $Bin.FullName
if ($LASTEXITCODE -ne 0) { throw "Training run failed with exit code $LASTEXITCODE" }

Write-Host "Profiles after run:"
Get-ChildItem -Path $PgoDataDir -Force | Format-Table -AutoSize

Write-Host "=== Configure - PGO Use ===" -ForegroundColor Cyan
cmake -S . -B $BuildDir `
    -G $Generator `
    -A $Architecture `
    -DCMAKE_BUILD_TYPE=Release `
    -DPGO_MODE=USE `
    "-DPGO_DATA_DIR=$PgoDataDir"
if ($LASTEXITCODE -ne 0) { throw "CMake configure (Use) failed" }

Write-Host "=== Build - PGO Use ===" -ForegroundColor Cyan
cmake --build $BuildDir --config Release -v
if ($LASTEXITCODE -ne 0) { throw "CMake build (Use) failed" }

Write-Host "=== Done ===" -ForegroundColor Green
$FinalBin = Get-ChildItem -Path $BuildDir -Filter "StringInt-Benchmarks.exe" -Recurse `
    | Select-Object -First 1
Write-Host "Final PGO-optimized binary: $($FinalBin.FullName)"