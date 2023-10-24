#include "lists.h"
/**
 * free_listint2 - frees a linked list.
 * @head: the head of list.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *curre;

	if (head != NULL)
	{
		curre = *head;
		while ((tmp = curre) != NULL)
		{
			curre = curre->next;
			free(tmp);
		}
		*head = NULL;
	}
}
