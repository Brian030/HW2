#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int worked;
	float rate, salary;

	printf("Enter # of hours worked (-1 to end): ");
	scanf_s("%d", &worked);

	while (worked != -1) 
	{
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &rate);
		if(worked > 40)
		{
			salary = (worked-40)*rate*1.5+40*rate;
			printf("Salary is %f\n\n", salary);
		}
		else 
		{
			salary = worked*rate;
			printf("Salary is %f\n\n", salary);
		}
		printf("Enter # of hours worked (-1 to end): ");
		scanf_s("%d", &worked);
	}

	system("pause");
	return 0;
}