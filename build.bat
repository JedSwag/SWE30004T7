::Build the solutions
g++ main.cpp -o main.exe
g++ tests.cpp -o tests.exe


::Tests
tests.exe

PAUSE

IF NOT "%errorlevel%" == "0"
{
::	PAUSE
::	abort build, the tests failed
}

PAUSE