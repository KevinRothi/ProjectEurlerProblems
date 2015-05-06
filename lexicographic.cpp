#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> number_set;
	for(int i = 0; i < 10; i++)
	{
		number_set.push_back(i);
	}
	for(auto iter = number_set.begin(); iter != number_set.end(); iter++)
	{
		cout << *iter;
	}
	cout << endl;
	for(int i = 0; i < 999999; i++)
	{
		next_permutation(number_set.begin(), number_set.end());
	}
	for(auto iter = number_set.begin(); iter != number_set.end(); iter++)
	{
		cout << *iter;
	}
	cout << endl;
	
	return 0;
}
