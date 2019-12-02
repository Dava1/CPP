#ifndef _TIME_H
#define _TIME_H
#include "IComparable.h"

struct Time : IComparable
{
public:
	Time(int hours,int minutes,int seconds);
	~Time();
	int compareTo(IComparable* object) const override;
	std::string toString() const override;

private :
	int hours;
	int minutes;
	int seconds;
};
#endif // !_TIME_H