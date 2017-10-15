#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int code, mpu;
	double hour, hrsalary, sales, weeksalary;

	printf("輸入薪資代碼: ");
	scanf_s("%d", &code);

	switch (code)
	{
	case 1:
		printf("輸入週薪: ");
		scanf_s("%lf", &weeksalary);
		printf("本週薪水為: %.2f", weeksalary);
		break;
	case 2:
		printf("輸入工作時數: ");
		scanf_s("%lf", &hour);
		printf("輸入每小時工資: ");
		scanf_s("%lf", &hrsalary);
		if (hour > 40);
		{
			weeksalary = 40 * hrsalary + (hour - 40)*hrsalary*1.5;
			printf("本週薪水為: %.2f", weeksalary);
		}
		if (hour <= 40)
		{
			weeksalary = hour * hrsalary;
			printf("本週薪水為: %.2f", weeksalary);
		}
		break;
	case 3:
		printf("輸入銷售金額: ");
		scanf_s("%lf", &sales);
		weeksalary = 250 + sales*0.057;
		printf_s("本週薪水為: %.2f", weeksalary);
		break;
	case 4:
		printf("輸入生產件數: ");
		scanf_s("%lf", &sales);
		printf("輸入一件產品酬勞: ");
		scanf_s("%d", &mpu);
		weeksalary = mpu* sales;
		printf("本週薪水為: %.2f", weeksalary);
		break;

	}

	system("pause");
	return 0;
}