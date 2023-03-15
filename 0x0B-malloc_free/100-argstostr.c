#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: arguments
 *
 * Return: array of string
 */
char *argstostr(int ac, char **av)
{
	char *s = NULL;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			s[k++] = av[i][j];
		s[k++] = '\n';
	}
	s[len] = '\0';
	return (s);
}
