#include "Time.h"


Time::Time(int hours, int minutes, int seconds)
{
	if (hours >= 0 && hours <= 23)
	{
		this->hours = hours;
	}
	else throw "Incorrect hours type";
	if (minutes >= 0 && minutes <= 59)
	{
		this->minutes = minutes;
	}
	else throw "Incorrect minutes type";
	if (seconds >= 0 && seconds <= 59)
	{
		this->seconds = seconds;
	}else throw " Uncorrect type of second type";
}

Time::~Time()
{
}

int Time::compareTo(IComparable* object) const
{
	if (dynamic_cast<Time*>(object))
	{
		Time* time = static_cast<Time*>(object);
		if (this->hours > time->hours)
		{
			return 1;
		}
		else if (this->hours == time->hours)
		{
			if (this->minutes > time->minutes)
			{
				return 1;
			}
			else if (this->minutes == time->minutes)
			{
				if (this->seconds > time->seconds)
				{
					return 1;
				}
				else if (this->seconds == time->seconds)
				{
					return 0;
				}
				else return -1;
			}
			else return -1;
		}
		else return -1;
	}
	else throw "Object doesn't possible campare!";
}

std::string Time::toString() const
{
return std::to_string(hours) + ":" + std::to_string(minutes) + ":" + std::to_string(seconds);
}




