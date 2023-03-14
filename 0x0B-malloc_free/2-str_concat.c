#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings in a new array of string
 * @s1: First string
 * @s2: Second string
 *
 * Return: New string which is result of concatenate s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	int i, j, size, len_s1, len_s2;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = 0;
	for (i = 0; s1[i] != '\0'; i++)
		len_s1++;
	len_s2 = 0;
	for (i = 0; s2[i] != '\0'; i++)
		len_s2++;
	size = len_s1 + len_s2;
	ptr = malloc(sizeof(char) * size + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < len_s2; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
