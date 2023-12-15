#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node in 
 * a specified index
 * @head: the head of list.
 * @index: index the element to delete
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prend;
	listint_t *nextnd;

	prend = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prend != NULL; i++)
		{
			prend = prend->next;
		}
	}

	if (prend == NULL || (prend->next == NULL && index != 0))
	{
		return (-1);
	}

	nextnd = prend->next;

	if (index != 0)
	{
		prend->next = nextnd->next;
		free(nextnd);
	}
	else
	{
		free(prend);
		*head = nextnd;
	}

	return (1);
}
