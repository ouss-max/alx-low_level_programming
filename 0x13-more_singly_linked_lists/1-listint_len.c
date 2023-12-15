#include "lists.h"

/**
 * listint_len - return the number of nodes on a linked list
 * @h: the head of the linked list.
 *
 * Return: the numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
