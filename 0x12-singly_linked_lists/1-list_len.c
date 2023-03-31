#include "lists.h"

/**
 * list_len - take a pointer on list and return a number of element which contain
 * @h: pointer on head node
 *
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	size_t len;
	const list_t *p;

	p = h;
	len = 0;
	while (p != NULL)
	{
		len++;
		p = p->next;
	}
	return (len);
}
