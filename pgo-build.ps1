param(
    [string]$WorkDir = $PSScriptRoot
)

Set-Location $WorkDir

$PgoDataDir = "$WorkDir\pgo-data"
$InstallPath = "$WorkDir\Install"

if (-not (Test-Path $PgoDataDir)) {
    New-Item -ItemType Directory -Path $PgoDataDir | Out-Null
}

$vsWhere = "${env:ProgramFiles(x86)}\Microsoft Visual Studio\Installer\vswhere.exe"
$vsPath = & $vsWhere -latest -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath
$vcvars = "$vsPath\VC\Auxiliary\Build\vcvars64.bat"

cmd /c "`"$vcvars`" && cmake -S . -B ./Build-Gen -DCMAKE_BUILD_TYPE=Release -DPGO_MODE=GENERATE -DPGO_DATA_DIR=`"$PgoDataDir`""
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

cmd /c "`"$vcvars`" && cmake --build ./Build-Gen --config=Release -v"
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

$trainingBin = Get-ChildItem -Path "./Build-Gen" -Recurse -Filter "StringInt-Benchmarks.exe" | Select-Object -First 1
if ($trainingBin) {
    & $trainingBin.FullName
} else {
    Write-Error "Training binary not found"
    exit 1
}

cmd /c "`"$vcvars`" && cmake -S . -B ./Build -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=`"$InstallPath`" -DPGO_MODE=USE -DPGO_DATA_DIR=`"$PgoDataDir`""
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

cmd /c "`"$vcvars`" && cmake --build ./Build --config=Release -v"
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

Push-Location ./Build
cmd /c "`"$vcvars`" && cmake --install . --config=Release"
Pop-Location

$finalBin = "$InstallPath\bin\StringInt-Benchmarks.exe"
if (Test-Path $finalBin) {
    & $finalBin
} else {
    Write-Warning "Final binary not found at $finalBin"
}