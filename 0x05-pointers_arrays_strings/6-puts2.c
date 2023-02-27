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

	for (i = 0; i < strlen(str); i += 2)
		printf("%c", str[i]);
	printf("\n");
}

