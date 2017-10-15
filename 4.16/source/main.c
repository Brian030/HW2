#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char sign = '*';
	int i, j;

	printf("(A)\n");
	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if (j <= i)
			{
				printf("%c", sign);
			}
		}
		printf("\n");
	}
//======================================================================
	printf("\n(B)\n");
	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if (j >= i)
			{
				printf("%c", sign);
			}
		}
		printf("\n");
	}
//=====================================================================
	printf("\n(C)\n");
	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if (j < i)
			{
				printf(" ");
			}
			else
			{
				printf("%c", sign);
			}
		}
		printf("\n");
	}
	//==================================================================
	printf("\n(D)\n");
	for (i = 0; i <= 9; ++i)
	{
		for (j = 9; j >= 0; --j)
		{
			if (j <= i)
			{
				printf("%c", sign);
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