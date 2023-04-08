#include "main.h"

/**
 * binary_to_uint - convert the binary number in decimal number
 * @b: binary number
 *
 * Return: unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int i, len;

	if (b == NULL)
		return (0);

	if (!check_binary_number(b))
		return (0);
	
	len = 0;
	while (b[len])
		len++;
	
	n = 0;
	for (i = 0; b[len - 1]; i++)
	{
		n += (b[len - 1] / 49) * power(2, i);
		len--;

	}

	return (n);
}

/**
 * check_binary_number - take the pointer on string and check the contain
 * @b: binary number
 *
 * Return: 1 if all character is binary number (0 or 1), else 0
 */
int check_binary_number(const char *b)
{
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (1);
}

/**
 * power - calculate power of a
 * @a: first input
 * @b: second input
 *
 * Return: a ** b
 */
int power(int a, int b)
{
	if (b == 0)
		return (1);
	else
	{
		b--;
		return (a * power(a, b));
	}
}
