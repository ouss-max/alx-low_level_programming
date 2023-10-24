#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node to
 * the end of a list.
 * @head: pointer to the head of the list
 * @str: string to add as  new element
 *
 * Return: address of the new element
 *  or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	list_t *curr;


	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	
	n_node->str = strdup(str);
	n_node->len = strlen(str);
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}

	curr = *head;
	while (curr->next != NULL)
		curr = curr->next;


	curr->next = n_node;

	return (n_node);
}
