#include "lists.h"

/**
 * free_listp2 - free a linked list
 * @head: the head of list.
 *
 * Return: void.
 */
void free_listp2(listp_t **head)
{
	listp_t *tmp;
	listp_t *curren;

	if (head != NULL)
	{
		curren = *head;
		while ((tmp = curren) != NULL)
		{
			curren = curren->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees  linked list.
 * @h: the head of list.
 *
 * Return: the size of the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodesnum = 0;

	listp_t *ptrhd, *newnd, *add;
	listint_t *curr;

	ptrhd = NULL;
	while (*h != NULL)
	{
		newnd = malloc(sizeof(listp_t));

		if (newnd == NULL)
			exit(98);

		newnd->p = (void *)*h;
		newnd->next = ptrhd;
		ptrhd = newnd;

		add = ptrhd;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&ptrhd);
				return (nodesnum);
			}
		}
		curr = *h;
		*h = (*h)->next;
		free(curr);
		nodesnum++;
	}
	*h = NULL;
	free_listp2(&ptrhd);
	return (nodesnum);
}
