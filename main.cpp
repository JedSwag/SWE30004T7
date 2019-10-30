#include <iostream>
#include <bitset>
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

int main(int argc, char *argv[]) 
{
	int result = 0;
    cout << "Hello, World!\n";

    return result;
}