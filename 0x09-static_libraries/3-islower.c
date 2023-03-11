#include "main.h"
/**
 * _islower - check the code.
 * @c : An input caracter
 * Return: 1 if is lowercase or 0 if is uppercase.
 */
int _islower(int c)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
