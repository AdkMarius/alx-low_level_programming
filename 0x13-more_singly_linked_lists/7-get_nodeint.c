#include "lists.h"

/**
 * get_node_at_index - return a node by using his index
 * @head: pointer on the head node
 * @index: index of node to return
 *
 * Return: pointer of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
        listint_t *current, *searchNode;
        unsigned int i, OK;

        current = head;
        i = 0;
        OK = 0;
        while (current)
        {
                if (i == index)
                {
                        searchNode = current;
                        OK = 1;
                        break;
                }
                current = current->next;
                i++;
        }
        if (!OK)
                return (NULL);
        return (searchNode);
}
