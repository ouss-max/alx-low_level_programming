#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the head of the list
 * @str: string to be added as the new element
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;

	/* Create a new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the new node's values */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	/* If the list is empty, set the new node as the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to find the last node */
	current = *head;
	while (current->next != NULL)
		current = current->next;

	/* Set the next pointer of the last node to the new node */
	current->next = new_node;

	return (new_node);
}
