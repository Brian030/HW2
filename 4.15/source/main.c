#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double amount;
	double principal = 5000.0;
	double rate=0.1;
	unsigned int year;

	

	for (rate = 0.1; rate <= 0.12; rate += 0.005)
	{
		printf("%4s%21s\n", "Year", "Amount on deposit");

		for (year = 1; year <= 15; ++year)
		{

			amount = principal*pow(1.0 + rate, year);

			printf("%4u%21.2f\n", year, amount);
			
		}
			printf("\n");
	}

	system("pause");
	return 0;
}