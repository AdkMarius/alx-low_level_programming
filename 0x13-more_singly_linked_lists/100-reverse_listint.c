#include "lists.h"

/**
 * reverse_listint - reverse the linked list
 * @head: pointer to a head node
 *
 * Return: pointer on the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *next;

	if (*head == NULL)
		return (NULL);

	current = *head;
	*head = current->next;
	next = (*head)->next;
	current->next = NULL;
	if (*head == NULL)
	{
		*head = current;
		return (current);
	}

	while (next)
	{
		(*head)->next = current;
		current = *head;
		*head = next;
		next = next->next;
	}

	(*head)->next = current;
	return (*head);
}
