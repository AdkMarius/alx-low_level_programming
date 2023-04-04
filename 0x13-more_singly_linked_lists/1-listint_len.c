#include "lists.h"

/**
 * listint_len - count and return the number of a list
 * @h: pointer on the head node
 *
 * Return: the number of node in the list
 */
size_t listint_len(const listint_t *h)
{
        size_t count;
        const listint_t *p;

        count = 0;
        p = h;
        while (p != NULL)
	{
                count++;
		p = p->next;
	}
        return (count);
}
