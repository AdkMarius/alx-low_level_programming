#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
