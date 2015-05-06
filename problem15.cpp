#include <iostream>

using namespace std;

long recursive();

int main()
{
	cout << recursive() << endl;
	
	return 0;
}

long recursive()
{	
	long array[21][21];
	for (int i = 0; i < 21; ++i)
	{
		array[0][i] = 1;
		array[i][0] = 1;
	}
	for (int i = 1; i < 21; ++i)
	{
		for (int j = 1; j < 21; ++j)
		{
			array[i][j] = array[i-1][j] + array[i][j-1];
			cout << array[i][j] << endl;
			if (i == j)
			{
				cout << "corner = " << array[i][j] << endl;
			}
		}
	} 
	return array[20][20];
}
