#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at
 *  a given position.
 * @head: the head of  list.
 * @idx: index podition of the new node.
 * @n: element n.
 *
 * Return: the address of the new node
 *   NULL if in failure.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *new;

	listint_t *nh;

	nh = *head;
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && nh != NULL; i++)
		{
			nh = nh->next;
		}
	}

	if (nh == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = nh->next;
		nh->next = new;
	}

	return (new);
}
