#include "main.h"
/**
 * _islower - check the code.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (c == i)
			return (1);
		else continue;
	}
	return (0);
}
