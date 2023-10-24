#include "lists.h"

/**
 * free_list - free linked list0
 * @head: the head of the list.
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *tempnode;

	while ((tempnode = head) != NULL)
	{
		head = head->next;
		free(tempnode->str);
		free(tempnode);
	}
}
