#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	largest = max(a, b);
	largest = max(largest, c);
	return (largest);
}

/**
 * max - largest function
 * @a: An integer input
 * @b: An integer input
 * Return: the largest number a or b
 */
int max(int a, int b)
{
	int max;

	if (a > b)
		max = a;
	else
		max = b;
	return (max);
}
