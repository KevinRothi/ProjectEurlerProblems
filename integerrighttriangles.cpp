#include <iostream>
#include <algorithm>

using namespace std;

int number_solutions(int number)
{
	int to_return = 0;
	for(int a = 1; a < number; a++)
	{
		for(int b = 1; b < number - a; b++)
		{
			int c = (number - a - b);
			if(a*a + b*b == c*c)
			{
				to_return++;
			}
		} 
	}
	return to_return;
}

int main()
{
	int max_value = 0;
	int to_return = 0;
	for(int i = 0; i <= 1000; i++)
	{
		if(number_solutions(i) > max_value)
		{
			max_value = number_solutions(i);
			to_return = i;
		}
	}	
	cout << to_return << endl;

	return 0;
}
