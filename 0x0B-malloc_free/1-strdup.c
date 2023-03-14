#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - create an area memory and copy the srting in the area
 * @str: string to copy in the area memory
 *
 * Return: string array
 */
char *_strdup(char *str)
{
	char *ptr = NULL;
	int i, size;

	if (str == NULL)
		;
	else
	{
		size = 0;
		for (i = 0; str[i] != '\0'; i++)
			size++;
		ptr = malloc(sizeof(char) * size + 1);
		if (ptr == NULL)
			return (0);
		for (i = 0; i < size; i++)
			ptr[i] = str[i];
		ptr[i] = '\0';
	}
	return (ptr);
}
