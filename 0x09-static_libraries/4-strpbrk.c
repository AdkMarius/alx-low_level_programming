#include "main.h"
#include <string.h>

/**
 * _strpbrk - check the code
 * @s: An array of string
 * @accept: An array of string which holds the characters to search
 *
 * Return: A pointer to the byte in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *result;
	
	result = strpbrk(s, accept);
	if (result != NULL)
		return (result);
	return (NULL);
}
