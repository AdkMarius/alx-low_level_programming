#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int A, B, C;
	
	A = 1;
	B = 2;
	for (i = 0; i < 50; i++)
	{
		if (i == 0)
			printf("%ld, ", A);
		else if (i == 1)
			printf("%ld, ", B);
		else
		{
			C = A + B;
			A = B;
			B = C;
			if (i < 49)
				printf("%ld, ", C);
			else
				printf("%ld", C);
		}
	}
	printf("\n");
	return (0);
}
		
