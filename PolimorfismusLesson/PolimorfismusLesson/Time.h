#ifndef _TIME_H
#define _TIME_H
#include "IComparable.h"
class Time: virtual IComparable 
{
public:
	Time(int hours,int minutes,int seconds);
	~Time();
	virtual int compareTo(IComparable* object) override;
	virtual std::string toString() override;
	int GetHours() const;
	int GetMinutes() const;
	int GetSecunds() const;
	void SetHours(int hours);
	void SetMinutes(int minutes);
	void SetSeconds(int second);
private :
	int hours;
	int minutes;
	int seconds;
};
#endif // !_TIME_H