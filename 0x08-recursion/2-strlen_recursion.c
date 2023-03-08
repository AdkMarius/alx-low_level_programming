#include "main.h"

/**
 * _strlen_recursion - check the code
 * @s: input
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		;
	else
	{
		i++;
		return (i + _strlen_recursion(s + i));
	}
	return (i);
}
