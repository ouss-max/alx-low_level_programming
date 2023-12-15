#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: the head of list.
 *
 * Return: pointer to the head.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnd;
	listint_t *nextnd;

	prevnd = NULL;
	nextnd = NULL;

	while (*head != NULL)
	{
		nextnd = (*head)->next;
		(*head)->next = prevnd;
		prevnd = *head;
		*head = nextnd;
	}

	*head = prevnd;
	return (*head);
}
