#include "Date.h"

Date::Date()
{
	this->_day = rand() % 30 + 1;
	this->_month = rand() % 12 + 1;
	this->_year = rand() % 2033 + 1;
}

Date::Date(int month, int day, int year)
{
	this->_day = day;
	this->_month = month;
	this->_year = year;
}

Date::~Date()
{
}
