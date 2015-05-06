#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int calc_string_value(string to_calculate);

int main()
{
	string line;
	int line_count = 0;
	int total = 0;
	vector<std::string> names;
	ifstream myfile;
	myfile.open("names.txt");
	while(getline(myfile, line, ','))
	{
		line = line.substr(1, line.length() - 2);	
		names.push_back(line);
	}
	sort(names.begin(), names.end());
	for(auto i = names.begin(); i != names.end(); i++)
	{
		line_count = line_count + 1;
		total = total + (calc_string_value(*i) * line_count);
		
	}
	cout << total << endl;
	cout << calc_string_value("ABC") << endl;
	return 0;
}

int calc_string_value(string to_calculate)
{
	int total = 0;
	for(int i = 0; i < to_calculate.length(); i++)
	{
		total = total + (to_calculate[i] - 64);
	}
	return total;
}
