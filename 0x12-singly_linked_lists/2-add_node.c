#include "lists.h"
/**
 * add_node - add new node to the head
 * of a list_t list.
 * @head: the head of linked list.
 * @str: string to put on the list.
 * Return: pointer to the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nc;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nc = 0; str[nc]; nc++)
		;

	new->len = nc;
	new->next = *head;
	*head = new;

	return (*head);
}