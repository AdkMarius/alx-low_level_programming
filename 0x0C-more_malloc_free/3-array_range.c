#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of integers which contain all the values between min and max
 * @min: input
 * @max: input
 *
 * Return: array or NULL
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
