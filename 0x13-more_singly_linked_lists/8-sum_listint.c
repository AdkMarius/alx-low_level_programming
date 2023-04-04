#include "lists.h"

/**
 * sum_listint - calculate elements' sum and return
 * @head: pointer of head element
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
        listint_t *current;
        int sum;

        current = head;
        if (current == NULL)
                return (0);
        sum = 0;
        while (current)
        {
                sum += current->n;
                current = current->next;
        }
        return (sum);
}
