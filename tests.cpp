#include "tests.h"

//main line of tests
int RunTests()
{
	int result = 0;

	result |= (test1() << 0);
	result |= (test2() << 1);

	return result;
}

int test1()
{
	int result = 1;

	if(IncrementNumber(7) == 8)
	{
		result = 0;
	}

	return result;
}

int test2()
{
	int result = 1;

	if(IncrementNumber(9) == 101)
	{
		result = 0;
	}

	return result;
}