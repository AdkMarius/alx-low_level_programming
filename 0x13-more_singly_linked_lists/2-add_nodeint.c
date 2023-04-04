#include "lists.h"

/**
 * add_nodeint - add node at the beginning
 * @head: double pointer on the head node
 * @n: number to add
 *
 * Return: a pointer on the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
        listint_t *newNode;

        newNode = malloc(sizeof(listint_t));
        if (newNode == NULL)
        {
                free(newNode);
                return (NULL);
        }
        newNode->n = n;
        newNode->next = *head;
        *head = newNode;
        return (*head);
}
