#include "Date.h"

Date::Date(int _day, int _month, int _year)
{
	this->_day = _day;
	this->_month = _month;
	this->_year = _year;
}

Date::~Date()
{
}

int Date::GetDay() const
{
	return _day;
}

int Date::GetYear() const
{
	return _year;
}

int Date::GetMonth() const
{
	return _month;
}
