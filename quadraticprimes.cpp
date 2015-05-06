#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int generate_numbers(int a, int b, int n);
bool is_prime(int check);

int main()
{
	int n = 0;
	int conseq_counter = 0;
	int max = 0;
	int optimal_a = 0;
	int optimal_b = 0;
	for(int a = 0; a < 1000; a++)
	{
		if(a % 100 == 0)
		{
			cout << a << endl;
		}
		for(int b = 0; b < 1000; b++)
		{
			while(is_prime(generate_numbers(a, b, n)))
			{
				n++;
				conseq_counter++;
			}
			if(conseq_counter > max)
			{
				max = conseq_counter;
				cout << "MAX: " << max << endl;
				optimal_a = a;
				optimal_b = b;		
			}
			conseq_counter = 0;
			n = 0;
		}
		for(int b = 0; b > -1000; b--)
		{
			while(is_prime(generate_numbers(a, b, n)))
			{
				n++;
				conseq_counter++;
			}
			if(conseq_counter > max)
			{
				max = conseq_counter;
				cout << "MAX: " << max << endl;
				optimal_a = a;
				optimal_b = b;		
			}
			conseq_counter = 0;
			n = 0;
		}
	}
	conseq_counter = 0;
	n = 0;
	cout << "MAX: " << max << endl;
	for(int a = 0; a > -1000; a--)
	{
		if(a % 50 == 0)
		{
			cout << a << endl;
		}
		for(int b = 0; b > -1000; b--)
		{
			while(is_prime(generate_numbers(a, b, n)))
			{
				n++;
				conseq_counter++;
			}
			if(conseq_counter > max)
			{
				max = conseq_counter;
				cout << "MAX: " << max << endl;
				optimal_a = a;
				optimal_b = b;		
			}
			conseq_counter = 0;
			n = 0;
		}
		for(int b = 0; b < 1000; b++)
		{
			while(is_prime(generate_numbers(a, b, n)))
			{
				n++;
				conseq_counter++;
			}
			if(conseq_counter > max)
			{
				max = conseq_counter;
				cout << "MAX: " << max << endl;
				optimal_a = a;
				optimal_b = b;		
			}
			conseq_counter = 0;
			n = 0;
		}

	}
	cout << optimal_a * optimal_b << endl;
	return 0;
}

int generate_numbers(int a, int b, int n)
{
	return ((pow(n,2)) + (a*n) + (b));
}

bool is_prime(int check)
{
	check = abs(check);
	for(int i = 2; i < sqrt(check) + 1; i++)
	{
		if(check % i == 0)
		{
			return false;
		}
	}
	return true;
}
