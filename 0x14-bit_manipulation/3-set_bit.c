#include "main.h"

/**
 * set_bit - define the bit at the index at 1
 * @n: pointer on decimal number
 * @index: index of a bit
 *
 * Return: 1 if success, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}
