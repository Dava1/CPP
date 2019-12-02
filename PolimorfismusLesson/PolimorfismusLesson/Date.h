#pragma once
#include <cstdlib>
using namespace std;
class Date
{
public:
	Date();
	Date(int month, int day, int year);
	~Date();
private:
	int _day;
	int _month;
	int _year;
};