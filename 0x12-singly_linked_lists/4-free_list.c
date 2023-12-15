#include "lists.h"

/**
 * free_list - free a list
 * @head: the head of  linked list.
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *curr;

	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr->str);
		free(curr);
	}
}