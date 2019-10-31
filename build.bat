::Build the solutions
g++ main.cpp -o main.exe
g++ tests.cpp -o tests.exe


::Tests
tests.exe

echo %ERRORLEVEL%

IF NOT %ERRORLEVEL% == 0 exit /b %ERRORLEVEL%