#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int code, mpu;
	double hour, hrsalary, sales, weeksalary;

	printf("��J�~��N�X: ");
	scanf_s("%d", &code);

	switch (code)
	{
	case 1:
		printf("��J�g�~: ");
		scanf_s("%lf", &weeksalary);
		printf("���g�~����: %.2f", weeksalary);
		break;
	case 2:
		printf("��J�u�@�ɼ�: ");
		scanf_s("%lf", &hour);
		printf("��J�C�p�ɤu��: ");
		scanf_s("%lf", &hrsalary);
		if (hour > 40);
		{
			weeksalary = 40 * hrsalary + (hour - 40)*hrsalary*1.5;
			printf("���g�~����: %.2f", weeksalary);
		}
		if (hour <= 40)
		{
			weeksalary = hour * hrsalary;
			printf("���g�~����: %.2f", weeksalary);
		}
		break;
	case 3:
		printf("��J�P����B: ");
		scanf_s("%lf", &sales);
		weeksalary = 250 + sales*0.057;
		printf_s("���g�~����: %.2f", weeksalary);
		break;
	case 4:
		printf("��J�Ͳ����: ");
		scanf_s("%lf", &sales);
		printf("��J�@�󲣫~�S��: ");
		scanf_s("%d", &mpu);
		weeksalary = mpu* sales;
		printf("���g�~����: %.2f", weeksalary);
		break;

	}

	system("pause");
	return 0;
}