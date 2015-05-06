#include <iostream>
#include <set>
#include <math.h>

using namespace std;

int main()
{
	set<unsigned long long> big_set;
	for(int a = 2; a < 101; a++)
	{
		for(int b = 2; b < 101; b++)
		{
			big_set.insert(pow(a,b));
		}
	}
	cout << big_set.size() << endl;

	return 0;
}
