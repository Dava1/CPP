#include "Time.h"

Time::Time(int hours, int minutes, int seconds)
{
	if (hours >= 0 && hours < 23)
	{
		this->hours = hours;
	}
	if (minutes >= 0 && minutes <= 60)
	{
		this->minutes = minutes;
	}
	if (seconds >= 0 && seconds <= 60)
	{
		this->seconds = seconds;
	}
	else throw " Uncorrect type of time";
}

Time::~Time()
{
}

int Time::compareTo(IComparable* object)
{
	if (this->hours > dynamic_cast<Time*>(object)->GetHours() 
	&& this->minutes > dynamic_cast<Time*>(object)->GetMinutes() 
	&& this->seconds > dynamic_cast<Time*>(object)->GetSecunds())
	{
		return 1;
	}
	if (this->hours < dynamic_cast<Time*>(object)->GetHours()
	&& this->minutes < dynamic_cast<Time*>(object)->GetMinutes()
	&& this->seconds < dynamic_cast<Time*>(object)->GetSecunds())
	{
		return -1;
	}
	else return 0;
}

std::string Time::toString()
{
std::string str = hours + ":" + minutes;
str += ":"+seconds;
return str;
}

int Time::GetHours() const
{
	return hours;
}

int Time::GetMinutes() const
{
	return minutes;
}

int Time::GetSecunds() const
{
	return seconds;
}

void Time::SetHours(int hours)
{
	this->hours = hours;
}

void Time::SetMinutes(int minutes)
{
	this->seconds = seconds;
}

void Time::SetSeconds(int second)
{
	this->seconds = second;
}



