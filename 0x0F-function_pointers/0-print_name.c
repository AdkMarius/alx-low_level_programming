#include "function_pointers.h"

/**
 * print_name - function who print the name
 * @name: string
 * @f: function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
