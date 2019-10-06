#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char* argv[])
{
	int cislo = rand() % (20 + 1);
	int userNumber;
	printf("Zadejte cislo : ");
	scanf_s("&d", userNumber);
	int bol = 0;
	int count = 0;
	while (bol)
	{
		if (cislo == userNumber)
		{
			printf(" nadhera jsi oracle");
			bol++;
		}
		else 
		{
			printf("skus znovy\n , cislo je =");
			scanf_s("%d", userNumber);
			count++;
		}
		
	}
	printf("count =%d", count);
	system("pause");
}