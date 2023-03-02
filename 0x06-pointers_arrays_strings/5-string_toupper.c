#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * string_toupper: check the code
 * @s: An array of char
 *
 * Return: An array of char
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (check_char(s[i]))
				s[i] = toupper(s[i]);
	}
	return (s);
}

/**
 * check_char: check the code
 * @c: A char input
 *
 * Return: 0 or 1
 */
int check_char(char c)
{
	int a;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		a = 1;
	else 
		a = 0;
	return (a);
}
