#include "lists.h"

/**
 * free_listint - free the area memory reserved for the list
 * @head: pointer on the head element
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
        listint_t *current, *next;

        current = head;
        while (current)
        {
                next = current->next;
                free(current);
                current = next;
        }
}
