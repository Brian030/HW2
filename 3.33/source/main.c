#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int length, wide;
	int i, j;

	printf("¿é¤Jªø¸ò¼e: ");
	scanf_s("%d%d", &length, &wide);

	for (i = 0; i < length; i++)
	{
		for (j = 0; j < wide; j++)
		{
			if (i == 0 || i == length - 1 || j == 0 || j == wide - 1)
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;

}