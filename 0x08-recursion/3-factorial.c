#include "main.h"

/**
 * factorial - check the code
 * @n: input
 *
 * Return: int
 */
int factorial(int n)
{
	int result;

	if (n < 0)
		result = -1;
	else if (n <= 2)
		result = n;
	else
		result = n * factorial(n - 1);
	return (result);
}
