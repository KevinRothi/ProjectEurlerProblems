#include <iostream>
#include <math.h>

using namespace std;
bool can_be_expressed(int);

int main()
{
	int total = 0;
	for(int i = 2; i < 1000000; i++)
	{
		if(i % 100 == 0)
		{
			//cout << "Checking " << i << "..." << endl;
		}
		if(can_be_expressed(i))
		{
			cout << "Value found!: " << i << endl;
			total += i;
		}
	}
	cout << total << endl;
	return 0;
}

bool can_be_expressed(int check)
{
	int sum = 0;
	int input = check;
	for(int number = check % 10; check > 0; number = check % 10)
	{
		//cout << "number: " << number << endl;
		//cout << "check 1: " << check << endl;
		sum += pow(number, 5);
		//cout << "power: " << pow(number, 4) << endl;
		check = check / 10;
		//cout << "check 2: " << check << endl;
	}
	//cout << sum << endl;
	if(input == sum)
	{
		return true;
	}
	else
	{
		return false;
	} 
}
