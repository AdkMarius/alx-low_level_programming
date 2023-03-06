#include "main.h"
#include <string.h>

/**
 * _strchr - check the code
 * @s: An array of string input
 * @c: A char to search
 *
 * Return: A pointer on the char
 */
char *_strchr(char *s, char c)
{
	char *result;

	result = strchr(s, c);
	return (result);
}
