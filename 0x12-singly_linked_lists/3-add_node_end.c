#include "lists.h"

/**
 * add_node_end - add node at the end of linked list
 * @head: double pointer of the head node
 * @str: string to add
 *
 * Return: pointer on the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *p;
	int i;

	for (i = 0; str[i]; i++)
		;
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = i;
	newNode->next = NULL;
	p = *head;
	if (p == NULL)
		return (*head);
	while (p->next != NULL)
		p = p->next;
	p->next = newNode;
	return (*head);
}
