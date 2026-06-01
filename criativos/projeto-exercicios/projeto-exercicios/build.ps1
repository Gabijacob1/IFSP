# Custom build script (windows powershell).
#
# Usage:
#    .\build.ps1 c.e: clean, compile and run creative exercise c.e
#    .\build.ps1 c.e -clean: clean compiled file
#    .\build.ps1 c.e -cleanAndCompile: clean compiled file and compile the project
#    .\build.ps1 c.e -compile: compile the project
#    .\build.ps1 c.e -compileAndRun: compile the project and run the compiled file
#    .\build.ps1 c.e -run: run the compiled file
#
# Note: "c" and "e" are integers representing, respectively, chapter and exercise
#       numbers.
#
# Author: Prof. Dr. David Buzatto

param(
    [switch]$clean,
    [switch]$cleanAndCompile,
    [switch]$compile,
    [switch]$compileAndRun,
    [switch]$run
);

$numeroCriativo = $args[0]

$CompiledFile = "criativo$numeroCriativo.exe"

$all = $false
if ( -not( $clean -or $cleanAndCompile -or $compile -or $compileAndRun -or $run ) ) {
    $all = $true
}

# clean
if ( $clean -or $cleanAndCompile -or $all ) {
    Write-Host "Cleaning..."
    if ( Test-Path $CompiledFile ) {
        Remove-Item $CompiledFile
    }
}

# compile
if ( $compile -or $cleanAndCompile -or $compileAndRun -or $all ) {
    Write-Host "Compiling..."
    gcc src/criativos/criativo$numeroCriativo.c -o $CompiledFile `
        -O1 `
        -Wall `
        -Wextra `
        -Wno-unused-parameter `
        -pedantic-errors `
        -std=c99 `
        -Wno-missing-braces `
        -I src/include/ `
        -L lib/ `
        -lraylib `
        -lopengl32 `
        -lgdi32 `
        -lwinmm
}

# run
if ( $run -or $compileAndRun -or $all ) {
    Write-Host "Running..."
    if ( Test-Path $CompiledFile ) {
        & .\$CompiledFile
    } else {
        Write-Host "$CompiledFile does not exists!"
    }
}