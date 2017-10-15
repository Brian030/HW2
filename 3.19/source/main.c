#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int days;
	float rate, prin, interest;


	printf("Enter loan principal (-1 to end): ");
	scanf_s("%f", &prin);

	while (prin != -1)
	{
		printf("Enter interest rate: ");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf_s("%d", &days);

		interest = prin*rate*days / 365;
		printf("The interest charge is %f\n\n", interest);

		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &prin);		
	}

	system("pause");
	return 0;
}