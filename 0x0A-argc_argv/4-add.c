#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: input
 * @argv: input
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc >= 2)
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
