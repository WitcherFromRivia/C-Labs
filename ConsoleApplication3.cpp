﻿

#include "pch.h"
#include <iostream>
#include<fstream>
using namespace std;

int main()
{
	double arr[4] = { 12,44,75,90 };
	ofstream output;
	output.open("test.txt");
	output << arr[4];
	output.close();

	ifstream input;
	input.open("test.txt");
	double max = 0;
	for (int i = 0; i < 4; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	double numb1, numb2, numb3, numb4 ;
	input >> numb1 >> numb2 >> numb3 >> numb4;
	cout << max;
	input.close();

	
}

