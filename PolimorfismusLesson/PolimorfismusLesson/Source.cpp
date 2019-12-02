 
#include <iostream>
#include "Time.h"
using namespace std;


int main(int *argc, char** argv)
{
	Time* morning = new Time(6, 0, 0);
	Time* dinner = new Time(12, 30, 33);
	Time* evening = new Time(21, 14, 14);
	//Time* wrongTime = new Time(25, 59, 60);
	cout << morning->toString() << endl;
	int compare = evening->compareTo(morning);
	cout << compare << endl;

	return 0;
}