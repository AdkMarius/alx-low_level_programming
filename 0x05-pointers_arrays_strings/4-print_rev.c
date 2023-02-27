#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - check the code
 * @s: An string input
 * Return: Nothing
 */
void print_rev(char *s)
{
	int n, i;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
		printf("%c", s[i]);
	printf("\n");
}
