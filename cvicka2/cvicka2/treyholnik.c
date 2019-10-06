/*
#include <stdio.h>
#include <stdlib.h>

int generatorStran() {
	return rand() % (100 - 1) + 1;
}



int main(int argc, const char* argv)
{
	srand(time(0));

	int a = generatorStran();
	int b = generatorStran();
	int c = generatorStran();
	int iterace = 0;
	
	int repeat = 1;

	while (repeat) {
		if (a + b > c && b + c > a && c + a > b)
		{
			
			printf("strana a =%d\n", a);
			printf("strana b =%d\n", b);
			printf("strana c =%d\n", c);

			repeat = 0;

		}
		else {
			a = generatorStran();
			b = generatorStran();
			c = generatorStran();
		}

		iterace++;
	}

	printf("iterace: %d\n", iterace);

	system("pause");
}
*/