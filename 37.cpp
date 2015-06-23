#include <iostream>
#include <cmath>
#include <sstream>

bool isPrime(long long toValidate)
{
	if (toValidate == 1)
	{
		return false;
	}
	if (toValidate == 2)
	{
		return true;
	}
	for (int i = 2; i <= ceil(sqrt(toValidate)); i++)
	{
		if (toValidate % i == 0)
		{
			return false;
		}
	}
	return true;
}

std::string truncatePrimeFromLeft(std::string primeNum)
{
	std::string toReturn= "";
	for (int i = 1; i < primeNum.length(); i++)
	{
		toReturn.push_back(primeNum[i]);
	}
	return toReturn;
}

std::string truncatePrimeFromRight(std::string primeNum)
{
	std::string toReturn= "";
	for (int i = 0; i < primeNum.length() - 1; i++)
	{
		toReturn.push_back(primeNum[i]);
	}
	return toReturn;
}

bool truncatable(std::string primeNum)
{
	std::string primeNumFromLeft = primeNum;
	std::string primeNumFromRight = primeNum;
	for (int i = 0; i < primeNum.length() - 1; i++)
	{
		primeNumFromLeft = truncatePrimeFromLeft(primeNumFromLeft);
		primeNumFromRight = truncatePrimeFromRight(primeNumFromRight);
		//std::cout << "PN:" << primeNum << " L: " << primeNumFromLeft << " R: " << primeNumFromRight << std::endl;
		if(!isPrime(std::stoll(primeNumFromLeft)) || !isPrime(std::stoll(primeNumFromRight)))
		{
			return false;
		}
	}
	return true;
}

int main(int argc, char *argv[]) {
	std::string stringOfPrime = "";
	std::stringstream ss;
	long long sum = 0;
	short numFound = 1;
	long long check = 11;
	while(numFound < 12)
	{
		if (isPrime(check))
		{
			ss << check;
			stringOfPrime = ss.str();
			ss.str(std::string());
			if(truncatable(stringOfPrime))
			{
				std::cout << check << std::endl;
				sum += check;
				numFound++;
			}
		}
		check++;
	}
	std::cout << sum << std::endl;
}