#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node to 
 * the beginning of the list.
 * @head: pointer to the head of the list
 * @str: string to add as the new element
 *
 * Return: address of the new element
 *  or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

	
	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	
	n_node->str = strdup(str);
	n_node->len = strlen(str);
	n_node->next = *head;

	
	*head = n_node;

	return (n_node);
}
