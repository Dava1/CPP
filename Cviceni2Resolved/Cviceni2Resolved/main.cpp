#include <iostream>
#include "Pokladna.h"

using namespace std;
int main(int argc, char** argv) 
{
	Pokladna pokladna(10);
	Uctenka uctenka = pokladna.vystavUctenku(200.2,0.36);
	cout << uctenka.GetCisloUctenky() << endl;
	pokladna.vystavUctenku(300.0, 0.5);
	pokladna.vystavUctenku(235.4, 0.001);
	pokladna.DejUctenku(1);
	//pokladna.DejUctenku(11);
	system("pause");
	return 0;
}