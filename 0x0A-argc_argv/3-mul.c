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
	int product;

	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
