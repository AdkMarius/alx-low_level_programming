#include "main.h"
#include <string.h>

/**
 * _strncpy - check the code
 * @dest: A pointer to a string input
 * @src: A pointer to a string input
 * @n: An integer input
 *
 * Return: An array string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result;

	result = strncpy(dest, src, n);
	return (result);
}
