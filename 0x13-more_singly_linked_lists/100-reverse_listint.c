#include "lists.h"

/**
 * reverse_listint - reverse the linked list
 * @head: pointer to a head node
 *
 * Return: pointer on the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return (NULL);

	current = *head;
	previous = *head;
	while (current && current->next)
	{
		previous = current;
		current = current->next;
	}

	while (current)
	{
		current->next = *head;
		*head = 

}
