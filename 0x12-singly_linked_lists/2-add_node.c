#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of the list
 * @str: string to be added as the new element
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	/* Create a new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the new node's values */
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;

	/* Update the head pointer to point to the new node */
	*head = new_node;

	return (new_node);
}
