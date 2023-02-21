#include "main.h"
/**
 * _isalpha - check the code.
 * @c: An input character
 * Return: 1 if the input is a letter, loercase or uppercase
 */
int _isalpha(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
			c = 97 - 65 + c;
	}

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
