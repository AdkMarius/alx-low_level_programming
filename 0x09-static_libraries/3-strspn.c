#include "main.h"
#include <string.h>

/**
 * _strspn - check the code
 * @s: An array of string which pointer on the area memory
 * @accept: An array of string which holds the character that are accepted
 *
 * Return: The size of the big substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int size;

	size = strspn(s, accept);
	return (size);
}
