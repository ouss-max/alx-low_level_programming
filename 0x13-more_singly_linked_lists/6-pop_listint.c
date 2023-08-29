#include "lists.h"

/**
 * pop_listint - deletes the head 
 * node of a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *new;
	listint_t *now;

	if (*head == NULL)
		return (0);

	now = *head;

	hnode = now->n;

	new = now->next;

	free(now);

	*head = new;

	return (hnode);
}
