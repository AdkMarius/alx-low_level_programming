#include "lists.h"

/**
 * pop_listint - delete the head node of list
 * @head: double pointer on the head node
 *
 * Return: the number in the node deleted
 */
int pop_listint(listint_t **head)
{
        listint_t *current, *next;
        int n;

        current = *head;
        if (current == NULL)
                return (0);
        n = current->n;
        next = current->next;
        free(current);
        *head = next;
        return (n);
}
