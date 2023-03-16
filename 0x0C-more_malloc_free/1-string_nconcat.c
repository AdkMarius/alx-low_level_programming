#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate s1 and the n first bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: the n bytes of s2 to add to s1
 *
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i, j;
	int len_s1, len_s2, len_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = 0;
	len_s2 = 0;
	len_str = 0;
	for (i = 0; s1[i]; i++)
		len_s1++;
	for (i = 0; s2[i]; i++)
		len_s2++;
	if (n < len_s2)
		len_str = len_s1 + n;
	else
		len_str = len_s1 + len_s2;
	str = malloc(sizeof(char) * len_str + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		str[i] = s1[i];
	for (i = len_s1, j = 0; i < len_str; i++, j++)
		str[i] = s2[j];
	str[len_str] = '\0';
	return (str);
}
