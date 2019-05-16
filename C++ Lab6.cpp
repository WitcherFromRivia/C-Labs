#include"pch.h"
#include <iostream>
#include <fstream>
#include<istream>
#include<string>

using namespace std;

struct workers
{
	char name[20];
	char position[20];
	int education;
	int day,month,year;
	char sex;
};

int main()
{
	workers tmp;
	const int  size = 20;

	workers work[size] = {};
	workers work1;

		cout << "Enter name of worker: \n";
		cin >> work[20].name;
		cout << "Enter position(Engineer = eng,operator = oper,leading = lead,cleaner = cln): \n";
		cin >> work[20].position;
		cout << "Education(0-yes,1-no)\n";
		cin >> work1.education;
		cout << "Enter day: \n";
		cin >> work[size].day;
		cout << "Enter month: \n ";
		cin >> work[size].month;
		cout << "Enter year: \n ";
		cin >> work[size].year;
		cout << "Enter sex: \n ";
		cin >> work[20].sex;
		cin.get();
		cout << endl;
	ofstream fout("data.txt", ios::binary);
	for (int i = 0; i < size; ++i)
	{
		fout.write(reinterpret_cast<char*>(&work[i]), sizeof(workers));
	}



	fout.close();
	ifstream fin("data.txt", ios::binary);
	fin.seekg(3 * sizeof(tmp), ios::end);
	fin.read(reinterpret_cast<char*>(&tmp), sizeof(workers));
		if (work1.education == 1&&work[].position=='eng')
			cout << "Name:" << work[20].name<< "\n" << "Position:" << work[20].position << "\n" << "Education:" << work1.education << "\n" << "Date:" << work[size].day << "." << work[size].month << "." << work[size].year << ".\n" << "Sex:" << work[20].sex;
		else {
			cout << "Worker dont exist";
		}
	fin.close();

	return 0;
	}


