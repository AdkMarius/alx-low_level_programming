#include "lists.h"

/**
 * print_list - function which display each element of a singly lnked list
 * @h: pointer to a first node called head
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *p;

	count = 0;
	p = h;
	while (p != NULL)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", p->len, p->str);
		count++;
		p = p->next;
	}
	return (count);
}
