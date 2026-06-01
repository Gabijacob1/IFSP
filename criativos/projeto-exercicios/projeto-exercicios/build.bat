@ECHO OFF

REM Custom build script (batch file).
REM
REM Usage:
REM    .\build.bat c.e: clean, compile and run creative exercise c.e
REM    .\build.bat c.e -clean: clean compiled file
REM    .\build.bat c.e -cleanAndCompile: clean compiled file and compile the project
REM    .\build.bat c.e -compile: compile the project
REM    .\build.bat c.e -compileAndRun: compile the project and run the compiled file
REM    .\build.bat c.e -run: run the compiled file
REM
REM Note: "c" and "e" are integers representing, respectively, chapter and exercise
REM       numbers.
REM Author: Prof. Dr. David Buzatto

SET numeroCriativo=%1

SET switch=%2
SHIFT

SET currentStep=-1

SET CompiledFile=criativo%numeroCriativo%.exe

IF "%switch%"=="" GOTO allSteps
IF "%switch%"=="-clean" GOTO cleanSteps
IF "%switch%"=="-cleanAndCompile" GOTO cleanAndCompileSteps
IF "%switch%"=="-compile" GOTO compileSteps
IF "%switch%"=="-compileAndRun" GOTO compileAndRunSteps
IF "%switch%"=="-run" GOTO runSteps

:allSteps
SET steps[0]=clean
SET steps[1]=compile
SET steps[2]=run
SET steps[3]=end
GOTO nextStep

:cleanSteps
SET steps[0]=clean
SET steps[1]=end
GOTO nextStep

:cleanAndCompileSteps
SET steps[0]=clean
SET steps[1]=compile
SET steps[2]=end
GOTO nextStep

:compileSteps
SET steps[0]=compile
SET steps[1]=end
GOTO nextStep

:compileAndRunSteps
SET steps[0]=compile
SET steps[1]=run
SET steps[2]=end
GOTO nextStep

:runSteps
SET steps[0]=run
SET steps[1]=end
GOTO nextStep

:nextStep
SET /A currentStep=%currentStep%+1
CALL GOTO %%steps[%currentStep%]%%

:clean
ECHO Cleaning...
IF EXIST %CompiledFile% DEL %CompiledFile%
GOTO nextStep

:compile
ECHO Compiling...
gcc src/criativos/criativo%numeroCriativo%.c -o %CompiledFile% -O1 -Wall -Wextra -Wno-unused-parameter -pedantic-errors -std=c99 -Wno-missing-braces -I src/include/ -L lib/ -lraylib -lopengl32 -lgdi32 -lwinmm
GOTO nextStep

:run
ECHO Running...
IF EXIST %CompiledFile% ( %CompiledFile% ) ELSE ( ECHO %CompiledFile%% does not exists! )
GOTO nextStep

:end