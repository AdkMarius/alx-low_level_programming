#include "variadic_functions.h"

/**
 * sum_them_all - sum of numbers
 * @n: first input
 * @...: optional arguments
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list p;

	if (n == 0)
		return (0);
	va_start (p, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg (p, int);
	va_end (p);
	return (sum);
}
