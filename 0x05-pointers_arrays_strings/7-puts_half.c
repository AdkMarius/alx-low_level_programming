#include "main.h"
#include <stdio.h>

/**
 * puts_half - check the code
 * @str: char array string type
 * Return: Nothing 
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
		printf("%c", str[i]);
	printf("\n");
}
