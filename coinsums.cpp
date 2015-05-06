#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int array[8][201];
	int values[8] = {1, 2, 5, 10, 20, 50, 100, 200};
	for (int i = 0; i < 8; i++) //initialize the dynamic programming array
	{
		array[i][0] = 1;
	}
	for (int j = 0; j < 201; j++)
	{
		array[0][j] = 1;
	}
	for (int i = 1; i < 8; i++)
	{
		for (int j = 1; j < 201; j++)
		{
			if (j < values[i])
			{
				array[i][j] = array[i - 1][j];	
			}
			else
			{
				array[i][j] = array[i - 1][j] + array[i][j - values[i]];
			}
		}	
	}
	cout << array[7][200] << endl;


	return 0;
}
