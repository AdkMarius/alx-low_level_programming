#include "variadic_functions.h"

/**
 * print_strings - display the string
 * @separator: character between the string
 * @n: number of optional arguments
 * @...:optional arguments
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(p, char *));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
