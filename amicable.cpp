#include <iostream>
#include <map>

using namespace std;

void amicable(int test, int &total,  map<int, int> &table);

int main()
{
	map<int, int> table; 
	int total = 0;
	for (int i = 1; i < 10001; ++i)
	{
		amicable(i, total, table);
	}
	cout << total << endl;		
	return 0;
}

void amicable(int test, int &total, map<int, int> &table)
{
	int sum_of_divisors = 0;
	int second_sum_of_divisors = 0;
	if (table.find(test) == table.end())
	{
		cout << "Testing... " << test << endl;
		for (int i = 1; i < test; ++i)
		{
			if (test % i == 0)
			{
				sum_of_divisors += i;
				//cout << "Divisor found... " << i << endl;
			}
		}
		//cout << "The sum is... " << sum_of_divisors << endl;
		table[test] = sum_of_divisors;
		for (int i = 1; i < sum_of_divisors; ++i)
		{
			if (sum_of_divisors % i == 0)
			{
				second_sum_of_divisors += i;
				//cout << "Divisor found for second value... " << i << endl;
			}
		}
		table[sum_of_divisors] = second_sum_of_divisors;
		//cout << "The sum for the second number is... " << second_sum_of_divisors << endl;
		//cout << table[test] << endl;
		//cout << second_sum_of_divisors << endl;
		if (test == second_sum_of_divisors && test != sum_of_divisors)
		{
			cout << "Amicable pair found!" << endl;
			total = total + test + sum_of_divisors;
		}
	}
}
