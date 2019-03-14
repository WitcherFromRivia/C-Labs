#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
struct Computer {
	short size;
	int day;
	int month;
	int year;
	float prize;
};
int main()
{
	Computer AMD;
	AMD.size = 8;
	AMD.day = 24;
	AMD.month = 10;
	AMD.year = 2000;
	AMD.prize = 8569.5;
	cout << "Producer -"<<" AMD \n"<<"Size of RAM - "<<AMD.size<<" Gb"<<"\n"<<"Release date - "<<AMD.day<<"."<<AMD.month<<"."<< AMD.year <<"\n"<<"Min prize -"<<AMD.prize<<"$" <<endl;
}