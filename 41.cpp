#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

bool isPandigital(int toValidate)
{
	std::string candidate = std::to_string(toValidate);
	if (candidate.length() != 9)
	{
		return false;
	}
	if (candidate.find("1") != std::string::npos
		&& candidate.find("2") != std::string::npos
		&& candidate.find("3") != std::string::npos
		&& candidate.find("4") != std::string::npos
		&& candidate.find("5") != std::string::npos
		&& candidate.find("6") != std::string::npos
		&& candidate.find("7") != std::string::npos
		&& candidate.find("8") != std::string::npos
		&& candidate.find("9") != std::string::npos)
	{
		return true;
	}
	else
	{
		return false;
	}	
}

bool isPrime(int toValidate)
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

int main(int argc, char *argv[]) {
	int digits[7] = {7, 6, 5, 4, 3, 2, 1};
	std::string toPass = "";
	std::string toPush = "";
	do {
		toPass = "";
		for(int i = 0; i < 7; i++)
		{
			toPush = "";
			toPush = std::to_string(digits[i]);
			toPass += toPush;
		}
		if(isPrime(std::stoi(toPass)))
		{
			std::cout << toPass << std::endl;
		}
	} while ( std::prev_permutation(digits, digits+7) );
}