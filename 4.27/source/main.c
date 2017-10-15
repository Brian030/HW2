#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int side1, side2, side3, t;

	for (side1 = 1; side1 <= 500; ++side1)
	{
		for (side2 = 1; side2 <= 500; ++side2)
		{
			for (side3 = 1; side3 <= 500; ++side3)
			{	
				t = side1*side1 + side2*side2;
				if (t == side3*side3)
				{
					printf("side1\tside2\t±×Ãä\n");
					printf("%d\t%d\t%d\n\n", side1, side2, side3);
				}
			}
		}
	}

	system("pause");
	return 0;
}