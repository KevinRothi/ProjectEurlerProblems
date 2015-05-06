#include <iostream>
#include <unordered_set>
#include <algorithm>

using namespace std;

bool is_abundant(int number_to_check);
bool is_sum_of_2_abundant_numbers(int number_to_check, unordered_set<int> unordered_set_of_abundant_numbers); 

int main()
{
	unsigned long total = 0;
	unordered_set<int> unordered_set_of_abundant_numbers;
	for(int i = 1; i < 29000; i++)
	{
		if(is_abundant(i))
		{
			unordered_set_of_abundant_numbers.insert(i);
		}
	} 
	cout << "The list of nonabundant numbers has been created." << endl;	
	for(int i = 1; i < 29000; i++)
	{
		if(i % 100 == 0)
		{
			cout << "Checking " << i << endl;
		}
		if(!(is_sum_of_2_abundant_numbers(i, unordered_set_of_abundant_numbers)))
		{
			cout << i << endl;
			total += i;
		}
	}
	cout << total << endl;
	return 0;
}

bool is_abundant(int number_to_check)
{
	int sum_of_perfect_divisors = 0;
	for(int i = 1; i < number_to_check; i++)
	{
		if(number_to_check % i == 0)
		{
			sum_of_perfect_divisors += i;
		}
	}	
	if(sum_of_perfect_divisors > number_to_check)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool is_sum_of_2_abundant_numbers(int number_to_check, unordered_set<int> unordered_set_of_abundant_numbers)
{	
	for(int i = 1; i < number_to_check; i++)
	{	
		if(unordered_set_of_abundant_numbers.find(i) != unordered_set_of_abundant_numbers.end())
		{
			if(unordered_set_of_abundant_numbers.find(number_to_check - i) != unordered_set_of_abundant_numbers.end())
			{
				return true;
			}
		}
	}
	return false;
}
