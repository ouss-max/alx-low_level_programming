#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets the head to NULL
 * @head: double pointer to the head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
