#include <iostream>

using namespace std;

unsigned long long factorial(int num)
{
	unsigned long long to_return = 1;
	if (num == 0)
	{
		return to_return;
	}
	else
	{
		while(num != 1)
		{
			to_return *= num;
			num--;
		}
		return to_return;
	}
}

unsigned long long combinatoric(int i , int j)
{
	unsigned long long to_return = 0;
	to_return = ((factorial(i)) / (factorial(j)*(factorial(i-j))));
	return to_return;	
}

int main()
{
	int total = 0;
	for(int i = 23; i < 101; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			cout << factorial(6) << endl;
			if(combinatoric(i, j) > 1000000)
			{
				total++;		
			}
		}
	}	
	cout << total << endl;
	
	return 0;
}
