#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, result;
	int (*ptr)(int, int);

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[1]) != 0 && atoi(argv[3]) != 0)
	{
		if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
		{
			printf("Error\n");
			exit(100);
		}
		ptr = get_op_func(argv[2]);
		if (ptr != NULL)
		{
			result = ptr(atoi(argv[1]), atoi(argv[3]));
			printf("%d\n", result);
		}
	}
	return (0);
}
