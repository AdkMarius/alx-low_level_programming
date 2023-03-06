#include "main.h"
#include <string.h>

/**
 * _memset - check the code
 * @s: An array of string
 * @b: A char input
 * @n: An integer input
 *
 * Return: An array of string
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *result;

	result = memset(s, b, n);
	return (result);
}
