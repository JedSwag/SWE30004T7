#include <iostream>
#include "functions.cpp"

using namespace std;

void PrintBits(int toPrint)
{
	int i = 1;
	int length = sizeof(toPrint)*8;//bytes*8 gives number of bits;

	while(i <= length)
	{
		cout << (((toPrint >> (length - i))) & 1);//write out the next largest number

		if(i % 8 == 0)
		{
			cout << ' ';
		}

		i += 1;
	}

	cout << endl;
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

//main line of tests
int main()
{
	int result = 0;

	result |= (test1() << 0);
	result |= (test2() << 1);

	PrintBits(result);//output result

	return result;
}