#include "main.h"

/**
 * _pow_recursion - check the code
 * @x: input
 * @y: input
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	int result = 0;

	if (y < 0)
		result = -1;
	else if (y == 0)
		result = 1;
	else if (y == 1)
		result = x;
	else
	{
		if (y == 0)
			;
		else
		{
			y--;
			result = x * _pow_recursion(x, y);
		}
	}
	return (result);
}
