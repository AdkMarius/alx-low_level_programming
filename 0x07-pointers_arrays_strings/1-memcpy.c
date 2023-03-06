#include "main.h"
#include <string.h>

/**
 * _memcpy - check the code
 * @dest: A destination array of string 
 * @src: A source array of string
 * @n: The size of array of string to copy
 *
 * Return: A result array of string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *result;

	result = memcpy(dest, src, n);
	return result;
}
