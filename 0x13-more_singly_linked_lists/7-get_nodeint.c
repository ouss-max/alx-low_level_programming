#include "lists.h"

/**
 * get_nodeint_at_index - return the nthem node
 *  of the linked list
 * @head: the head of  list.
 * @index: index of the node.
 *
 * Return: nthem node.
 *   returns NULL, If node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}

	return (head);
}
