#include "main.h"

/**
 * _puts_recursion - check the code
 * @s: input
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (*(s + i) == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		i++;
		_puts_recursion(s + i);
	}
}
