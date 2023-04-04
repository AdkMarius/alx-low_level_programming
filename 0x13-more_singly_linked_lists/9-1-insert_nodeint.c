#include "lists.h" 

/**
 * insert_nodeint_at_index - add node at a position given
 * @head: double pointer on the head node
 * @idx: index of new node (started by 0)
 * @n: number to add
 *
 * Return: pointer on the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        listint_t *current, *next, *newNode;
        unsigned int i, count;

        current = *head;
        while (current)
        {
                current = current->next;
                count++;
        }
        if (idx > count - 1)
                return (NULL);
        newNode = malloc(sizeof(listint_t));
        if (!newNode)
        {
                free(newNode);
                return (NULL);
        }
        if (idx == 0)
                add_nodeint(head, n);
        else if (idx == count - 1)
                add_nodeint_end(head, n);
        else
        {
                newNode->n = n;
                current = *head;
                i = 0;
                while (current)
                {
                        next = current->next;
                        if (i + 1 == idx)
                        {
                                newNode->next = next;
                                current->next = newNode;
                        }
                        current = current->next;
                        i++;
                }
        }
        return (newNode);
}
