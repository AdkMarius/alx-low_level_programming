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
	int OK;

	if (size <= 0)
		return (-1);
	OK = 0;
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
		{
			OK = 1;
			return (i);
			break;
		}
	}
	return (-1);
}
