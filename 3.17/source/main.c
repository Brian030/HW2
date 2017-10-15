#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int acco;
	float balance, charge, paid, cred, nbalance;

	printf("Enter account number (-1 to end): ");
	scanf_s("%d", &acco);

	while (acco != -1) 
	{	
		printf("Enter begining balance: ");
		scanf_s("%f", &balance);
		printf("Enter total charge: ");
		scanf_s("%f", &charge);
		printf("Enter total credit: ");
		scanf_s("%f", &paid);
		printf("Enter credit limit: ");
		scanf_s("%f", &cred);
		nbalance = balance + charge - paid;
		if (cred < nbalance)
		{
			printf("Account:      %d\n", acco);
			printf("Credit limit: %f\n", cred);
			printf("Blance:       %f\n", nbalance);
			printf("Credit Limit Exceeded.\n\n");
		}
		printf("Enter account number (-1 to end): ");
		scanf_s("%d", &acco);
	}

	system("pause");
	return 0;

}