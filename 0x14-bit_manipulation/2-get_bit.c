#include "main.h"

/**
 * get_bit - return a bit by knowing his index
 * @n: number in base 10
 * @index: index of a bit
 *
 * Return: bit at the index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div;

	if (index > 64)
		return (-1);

	div = n >> index;

	return (div & 1);
}
