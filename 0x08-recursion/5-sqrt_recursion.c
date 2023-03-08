#include "main.h"

/**
 * _sqrt_recursion - check the code
 * @n: input
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (halp(n, 1));
}

/**
 * halper - check the code
 * @c: input
 * @i: input
 *
 * Return: int
 */
int halp(int c, int i)
{
	int square, result = 0;

	square = i * i;
	if (square == c)
		result = i;
	else if (square < c)
		result = (halp(c, i + 1));
	else
		result = -1;
	return (result);
}
