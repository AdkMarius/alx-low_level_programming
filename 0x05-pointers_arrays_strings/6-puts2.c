#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - check the code
 * @str: An string input
 * Return: Nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			printf("%c", str[i]);
	}
	printf("\n");
}
