#include "lists.h"

/**
 * add_nodeint_end - at node at the end
 * @head: double pointer on the head node
 * @n: number to add
 *
 * Return: pointer on the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *current, *newNode;

        newNode = malloc(sizeof(listint_t));
        if (newNode == NULL)
        {
                free(newNode);
                return (NULL);
        }
        newNode->n = n;
        newNode->next = NULL;
        current = *head;
        while (current && current->next)
                current = current->next;
        if (current == NULL)
                *head = newNode;
        else
                current->next = newNode;
        return (*head);
}
