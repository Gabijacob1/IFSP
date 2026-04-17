param($file, $dir, $name)
gcc $file -o "$dir\$name.exe"
if ($LASTEXITCODE -eq 0) { & "$dir\$name.exe" }