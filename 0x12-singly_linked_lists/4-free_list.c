#include "lists.h"

/**
 * free_list - delete all elements in the list
 * @head: pointer on list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
