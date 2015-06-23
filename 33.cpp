#include <iostream>
#include <cmath>

bool validate(float& i, float& j, float& reducedValue)
{
	int numerOnes = int(i) % 10;
	float numerTens = i / 10;
	int denomOnes = int(j) % 10;
	float denomTens = j / 10;
	numerTens = floor(numerTens);
	denomTens = floor(denomTens);
	
	if (numerOnes == denomOnes)
	{
		reducedValue = i / j;
		i = numerTens;
		j = denomTens;
		return true;
	}
	else if (numerOnes == denomTens)
	{
		reducedValue = i / j;
		i = numerTens;
		j = denomOnes;
		return true;
	}
	else if (numerTens == denomOnes)
	{
		reducedValue = i / j;
		i = numerOnes;
		j = denomTens;
		return true;
	}
	else if (numerTens == denomTens)
	{
		reducedValue = i / j;
		i = numerOnes;
		j = denomOnes;
		return true;
	}
	else
	{
		return false;
	}
}

bool equivalent(float i, float j, float reducedValue)
{
	//std::cout << "RV: " << reducedValue << std::endl;
	//std::cout << "i/j: " << i/j << std::endl;
	if (i/j == reducedValue)
	{
		return true;
	}
	return false;
}


int main(int argc, char *argv[])
{
	float numerator;
	float denominator;
	float reducedValue;
	for (int i = 11; i < 100; i++)
	{
		for (int j = i; j < 100; j++)
		{
			if (i % 10 == 0 || j % 10 == 0 || i == j)
			{
				
			}
			else 
			{
				numerator = float(i);
				denominator = float(j);
				//std::cout << "Checking... " << i << " and " << j << " for validity" << std::endl;
				if (validate(numerator, denominator, reducedValue))
				{
					//std::cout << "Valid fraction found. " << i << " and " << j << ". Checking reduction..." << std::endl;
					if (equivalent(numerator, denominator, reducedValue))
					{
						std::cout << "Good one found! "<< i << "/" << j << std::endl;
					}
				}
			}
		}
	}
	std::cout << "Done" << std::endl;
}