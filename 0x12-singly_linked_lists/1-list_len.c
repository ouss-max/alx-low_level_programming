#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return the number of elements in a list.
 * @h: pointer to the head of the list
 *
 * Return: the number of elements of the list
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;
	const list_t *curr = h;

	/* Traverse the list */
	while (curr != NULL)
	{
		counter++;
		curr = curr->next;
	}

	return (counter);
}
