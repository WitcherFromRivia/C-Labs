
#include "pch.h"
#include <iostream>
#include<fstream>
using namespace std;

int main()
{
	double arr[4] = {12,44,75,6};
	ofstream output;
	output.open("test.txt");
	output << arr[4];
	output.close();

	ifstream input;
	input.open("test.txt");
	double numb1, numb2, numb3, numb4;
	input >> numb1 >> numb2 >> numb3 >> numb4;
	cout << arr[4 - 1];
	input.close();


}


