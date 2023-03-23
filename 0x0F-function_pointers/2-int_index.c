#include "function_pointers.h"

/**
 * int_index - search integer in an array and returns his index
 * @array: array of int
 * @size: number of element in the array
 * @cmp: function pointer
 *
 * Return: index of element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
			break;
		}
	}
	return (-1);
}
