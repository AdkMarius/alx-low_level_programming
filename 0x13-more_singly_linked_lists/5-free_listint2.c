#include "lists.h"

/**
 * free_listint2 - free the area memory reserved for the list and defined head at NULL
 * @head: double pointer on the head element
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
        listint_t *current, *next;

        current = *head;
        while (current)
        {
                next = current->next;
                free(current);
                current = next;
        }
        if (current == NULL)
                *head = current;
}
