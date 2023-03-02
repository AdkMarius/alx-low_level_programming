#include "main.h"
#include <string.h>

/**
 * _strcat: check the code
 * @dest: A pointer to a string input
 * @src: A pointer to a string input
 * Return: A pointer to a string
 */
char *_strcat(char *dest, char *src)
{
	char *result;

	result = strcat(dest, src);
	return (result);
}
