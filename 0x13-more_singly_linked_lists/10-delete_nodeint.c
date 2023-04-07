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
	listint_t *current, *next, *previous;
	unsigned int i;
	int okay, count;

	if (*head == NULL)
		return (-1);

	current = *head;
	count = 0;
	while (current)
	{
		count++;
		current = current->next;
	}

	i = 0;
	okay = 0;
	current = *head;
	previous = *head;
	next = current->next;
	while (current)
	{
		if (index == 0)
		{
			free(current);
			*head = next;
			okay = 1;
			break;
		}
		else if (index == count - 1)
		{
			previous->next = NULL;
			free(current);
			okay = 1;
			break;
		}
		else if (i == index)
		{
			free(current);
			previous->next = next;
			okay = 1;
			break;
		}
		else
			;
		previous = current;	
		current = current->next;
		next = current->next;
		i++;
	}

	if (okay == 1)
		return (1);

	return (-1);
}
