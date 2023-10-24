#include "lists.h"

/**
 * sum_listint - Returns the sum of data in a list.
 * @head: The head of the list.
 *
 * Return: The sum of all the data.
 */
int sum_listint(listint_t *head)
{
    if (head == NULL)
        return (0);

    int sum = 0;

    while (head != NULL)
    {
        sum += head->n;
        head = head->next;
    }

    return (sum);
}
