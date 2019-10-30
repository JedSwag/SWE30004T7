::Build the solution
g++ main.cpp -o main.exe

::Run tests
set /A res = start ./main.exe t
if(res != 0)
{
	echo "oh no!"	
}