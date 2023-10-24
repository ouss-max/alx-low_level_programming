#include "lists.h"

/**
 * pop_listint - deletes the head node
 * in a linked list
 * @head: the head of list.
 *
 * Return: value of head node.
 */
int pop_listint(listint_t **head)
{
	int headn;
	listint_t *ht;
	listint_t *curre;

	if (*head == NULL)
		return (0);

	curre = *head;

	headn = curre->n;

	ht = curre->next;

	free(curre);

	*head = ht;

	return (headn);
}
