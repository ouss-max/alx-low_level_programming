#include "lists.h"

/**
 * add_node_end - add new node to the end of the list
 * @head: the head of the linked list.
 * @str: string to put on the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	size_t nc;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nc = 0; str[nc]; nc++)
		;

	new->len = nc;
	new->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (*head);
}