#include "lists.h"

/**
 * print_listint - function which display the number of linked list
 * @h: pointer of a head node
 *
 * Return: number of elements which are displayed
 */
size_t print_listint(const listint_t *h)
{
        size_t count;
        const listint_t *p;

        p = h;
        count = 0;
        while (p != NULL)
        {
                printf("%d\n", p->n);
                p = p->next;
                count++;
        }
        return (count);
}
