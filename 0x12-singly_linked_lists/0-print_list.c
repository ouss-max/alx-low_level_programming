#include "lists.h"
/**
 * print_list - prints all the elements of a list.
 * @h: linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t nl;

	nl = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(null)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nl++;
	}
	return (nl);
}
