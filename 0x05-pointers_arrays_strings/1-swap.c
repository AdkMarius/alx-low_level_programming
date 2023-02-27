#include "main.h"

/**
 * swap_int - check the code
 * @a: A pointer of integer input a
 * @b: A pointer of integer input b
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
