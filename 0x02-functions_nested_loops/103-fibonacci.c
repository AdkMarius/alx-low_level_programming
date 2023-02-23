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
	long int A[100], sum = 0;

	A[0] = 1;
	A[1] = 2;
	for (i = 2; i < 100; i++)
		A[i] = A[i - 1] + A[i - 2];
	i = 0;
	do {
		if (A[i] % 2 == 0)
			sum = sum + A[i];
		i++;
	} while (A[i] < 4000000);
	printf("%ld\n", sum);
	return (0);
}
