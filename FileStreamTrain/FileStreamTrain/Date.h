#ifndef _DATE_H
#define _DATE_H
#pragma once
struct Date
{
private:
	int _day;
	int _month;
	int _year;
public:
	Date(int _day,int _month, int _year);
	~Date();
	int GetDay() const;
	int GetYear() const;
	int GetMonth() const;
};

#endif // !_DATE_H


