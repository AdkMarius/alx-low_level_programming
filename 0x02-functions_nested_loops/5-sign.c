#include "main.h"
/**
 * print_sign - check the code.
 * @n: An input character
 * Return: 1 if the input is greather than zero, 0 if is zero, -1 if is less than zero
 */
int print_sign(int n)
{
	int a;

	if (n > 0)
	{
		_putchar('+');
		a = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		a = -1;
	}
	else 
	{
		_putchar('0');
		a = 0;
	}
	return (a);
}
