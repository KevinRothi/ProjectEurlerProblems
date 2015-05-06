#include <iostream>

using namespace std;

int generate_factorial(int number)
{
	int total = 1;
	while(number > 1)
	{
		total = total * number;
		number--;
	}
	return total;
}

bool check_factorial(int number)
{
	int check = number;
	int sum = 0;
	int digit = 0;
	while(number > 0)
	{
		digit = number % 10;
		number = number / 10;
		sum += generate_factorial(digit);
	}
	if(sum == check)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int sum = 0;
	for(int i = 3; i < 10000000; i++)
	{
		if(check_factorial(i))
		{
			cout << "Found!: " << i << endl;
			sum += i;
		}
	}
	cout << sum << endl;
	return 0;
}
