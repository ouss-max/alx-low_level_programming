#include "lists.h"

/**
 * add_nodeint - add a new node at the head of
 * a linked list.
 * @head: head of the list.
 * @n: element n.
 *
 * Return: address of the new head element
 * NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
