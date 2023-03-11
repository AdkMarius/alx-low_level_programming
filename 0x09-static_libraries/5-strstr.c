#include "main.h"
#include <string.h>

/**
 * _strstr - check the code
 * @haystack: input
 * @needle: input
 *
 * Return: A pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *result;

	result = strstr(haystack, needle);
	if (result != NULL)
		return (result);
	return (NULL);
}
