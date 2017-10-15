#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float dollars, salary;
	printf("Enter sales in dollars (-1 to end): ");
	scanf_s("%f", &dollars);

	while(dollars!=-1)
	{
		salary = 200 + dollars*0.09;
		printf("salary is: %f", salary);
		printf("\n\n");
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%f", &dollars);
	}

	system("pause");
	return 0;
}