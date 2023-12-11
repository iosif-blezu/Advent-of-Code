#include <iostream>
#include <fstream>
#include <string>


using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");


int main()
{
	int sum = 0, first_number, second_number;
	int digitPos = 0;
	string line;
	while (getline(fin, line))
	{
		digitPos = line.find_first_of("1234567890");
		first_number = line[digitPos] - '0';
		digitPos = line.find_last_of("1234567890");
		second_number = line[digitPos] - '0';
		sum += first_number * 10 + second_number;
	}

	fout << sum << endl;

	return 0;
}