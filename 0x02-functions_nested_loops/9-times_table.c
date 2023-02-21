#include <stdio.h>
#include "main.h"
/**
 * times_table - check the code.
 *
 * Return: void.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j != 9)
				printf("%d,\t", (i * j));
			else
				printf("%d", (i * j));
		}
		printf("\n");
	}
}
