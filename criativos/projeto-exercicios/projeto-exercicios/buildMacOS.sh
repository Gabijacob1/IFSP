#!/bin/bash

# Custom build script (macOS shell script).
#
# Usage:
#    ./build.sh c.e: clean, compile and run creative exercise c.e
#    ./build.sh c.e -clean: clean compiled file
#    ./build.sh c.e -cleanAndCompile: clean compiled file and compile the project
#    ./build.sh c.e -compile: compile the project
#    ./build.sh c.e -compileAndRun: compile the project and run the compiled file
#    ./build.sh c.e -run: run the compiled file
# 
# Note: "c" and "e" are integers representing, respectively, chapter and exercise
#       numbers.
#
# Author: Prof. Dr. David Buzatto

numeroCriativo="$1"

CompiledFile=criativo$numeroCriativo

clean_project() {
    echo "Cleaning..."
    rm -f $CompiledFile
}

compile_project() {
    echo "Compiling..."
    cc src/criativos/criativo$numeroCriativo.c -o $CompiledFile \
        -O1 \
        -Wall \
        -Wextra \
        -Wno-unused-parameter \
        -pedantic-errors \
        -std=c99 \
        -Wno-missing-braces \
        -I src/include/ \
        -L lib \
        -lraylib \
        -framework IOKit \
        -framework Cocoa \
        -framework OpenGL 
}

run_project() {
    echo "Running..."
    if [ -e $CompiledFile ]; then
        ./$CompiledFile
    else
        echo "$CompiledFile does not exists!"
    fi
}

if [ $# -eq 1 ]; then
    clean_project
    compile_project
    run_project
fi

if [ "$2" = "-clean" ]; then
    clean_project
fi

if [ "$2" = "-cleanAndCompile" ]; then
    clean_project
    compile_project
fi

if [ "$2" = "-compile" ]; then
    compile_project
fi

if [ "$2" = "-compileAndRun" ]; then
    compile_project
    run_project
fi

if [ "$2" = "-run" ]; then
    run_project
fi
