#include "main.h"
#include <string.h>

/**
 * _strncat - check the code
 * @dest: A pointer to a string input
 * @src: Apointer to a string input
 *
 * @n: An integer input
 * Return: A pointer to a string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result;

	result = strncat(dest, src, n);
	return (result);
}
