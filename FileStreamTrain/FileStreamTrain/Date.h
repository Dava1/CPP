#ifndef _DATE_H
#define _DATE_H
#include <iostream>

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
	friend std::ostream& operator<<(std::ostream& out,const Date& date);
	friend std::istream& operator>>(std::istream& in, Date& date);
};

#endif // !_DATE_H


