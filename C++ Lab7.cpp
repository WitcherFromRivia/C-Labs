
#include "pch.h"
#include <iostream>
#include <queue>        
using namespace std;

int main()
{
	deque<double> q{ 5.66, 1745.87, 355.3,347,6777.7,90 };
	deque<double>::iterator it = std::min_element(q.begin(), q.end());
	cout << *it << std::endl;
}