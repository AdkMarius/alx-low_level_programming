#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - check the code.
 * @a: An input character
 * Return: last digit of input
 */
int print_last_digit(int a)
{
	a = abs(a);
	a = a % 10;
	_putchar(a + '0');
	return (a);
}
