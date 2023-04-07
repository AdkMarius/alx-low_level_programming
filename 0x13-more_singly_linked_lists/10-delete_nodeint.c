#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at an index given
 * @head: double pointer on the head node
 * @index: index of node to delete
 *
 * Return: 1 if it succeeted or -1 it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *previous;
	unsigned int i;

	i = 0;
	current = *head;
	if (*head == NULL)
		return (-1);

	while (i < index)
	{
		i++;
		previous = current;
		if (current->next)
			current = current->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = current->next;
	else if (current->next)
		previous->next = current->next;
	else
		previous->next = NULL;

	free(current);
	return (1);
}
