#include "main.h"
#include <string.h>

/**
 * reverse_array - check the code
 * @a: A pointer to an integer
 * @n: size of array of integers
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0; i < n - 1; i++)
		;
	for (j = 0; j < n / 2; j++)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
		i--;
	}
}
