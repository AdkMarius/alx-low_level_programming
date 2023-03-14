#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - use malloc to create a string array
 * @size: size of string array
 * @c: character which well be assign to a string array
 *
 * Return: a string array
 */
char *create_array(unsigned int size, char c)
{
	char *str = NULL;
	int i;

	if (size == 0)
		;
	else
	{
		str = malloc(sizeof(char) * size);
		if (str == NULL)
			return (0);
		for (i = 0; i < size; i++)
			str[i] = c;
	}
	return (str);
}
