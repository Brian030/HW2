#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	
	for (i = 0; i <= 8; ++i)
	{
		for (j = 0; j <= 8; ++j)
		{
			if ((i == 0 || i == 8) && (j == 4))
			{
				printf("*");
			}
			else if ((i == 1 || i == 7) && (j >= 3 && j <= 5))
			{
				printf("*");
			}
			else if (i==4)
			{
				printf("*");
			}
			else if ((i == 2 || i == 6) && (j >= 2 && j <= 6))
			{
				printf("*");
			}
			else if ((i == 3 || i == 5) && (j >= 1 && j <= 7))
			{
				printf("*");
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