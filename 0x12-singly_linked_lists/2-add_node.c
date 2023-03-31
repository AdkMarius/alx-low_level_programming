#include "lists.h"

/**
 * add_node - take a string and add at beginning of list
 * @head: double pointer of head node
 * @str: pointer to a string
 *
 * Return: pointer on list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int i;

	for (i = 0; str[i] != '\0'; i++)
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
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
