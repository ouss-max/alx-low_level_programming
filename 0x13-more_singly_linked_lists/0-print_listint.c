#include "lists.h"

/**
 * print_listint - print all the elements of the linked list
 * @h: head of the linked list
 *
 * Return: total of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count += 1;
		current = current->next;
	}
	return (count);
}
