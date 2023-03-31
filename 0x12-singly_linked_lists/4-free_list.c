#include "lists.h"

/**
 * free_list - delete list
 * @head: pointer on list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *current;

	if (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
	return (head);
}
