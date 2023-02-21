#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(ch[i]);
	_putchar('\n');
	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
