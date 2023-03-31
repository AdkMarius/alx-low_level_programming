#include "lists.h"

/**
 * free_list_head - delete list at head
 * @head: pointer on list
 *
 * Return: Nothing
 */
list_h *free_list_head(list_t *head)
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

/**
 * free_list - delete all elements in the list
 * @head: pointer on list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return ;
	head = free_list_head(head);
	free_list(head);
}
