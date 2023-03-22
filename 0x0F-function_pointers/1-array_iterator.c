#include "function_pointers.h"

/**
 * array_iterator - excutes action on each element of array
 * @array: array of integers
 * @size: number of elements in array
 * @action: function pointer
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
