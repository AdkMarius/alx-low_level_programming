#include "main.h"

/**
 * is_prime_number - check the code
 * @n: input
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime_checker(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
 * prime_checker - check the code
 * @n: input
 * @i: input
 *
 * Return: prime check
 */
int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime_checker(n, i - 1));
}
