#include "main.h"

/**
 * clear_bit - define the bit at index at 0
 * @n: pointer on decimal number
 * @index: index
 *
 * Return: 1 if success, 0 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int hold;
	int p;

	if (index > 64)
		return (-1);
	
	hold = index;
	for (p = 1; hold > 0; hold--, p *= 2)
		;
	
	if ((*n >> index) & 1)
		*n -= p;

	return (1);
}
