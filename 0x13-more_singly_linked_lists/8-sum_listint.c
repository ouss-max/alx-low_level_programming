#include "lists.h"

/**
 * sum_listint - return the sum of data in a list
 * @head: the head of list.
 *
 * Return: sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum=0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
