#include "lists.h"

/**
 * free_listp - free a linked list
 * @head: double pointer to the head of the list.
 *
 * Return: void.
 */
void free_listp(listp_t **head)
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
 * print_listint_safe - print element of a linked list.
 * @head: pointer to the head node.
 *
 * Return: number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t numnode = 0;

	listp_t *ptrhd, *newnd, *addnd;

	ptrhd = NULL;
	while (head != NULL)
	{
		newnd = malloc(sizeof(listp_t));
		if (newnd == NULL)
			exit(98);
		newnd->p = (void *)head;
		newnd->next = ptrhd;
		ptrhd = newnd;
		addnd = ptrhd;
		while (addnd->next != NULL)
	{
			addnd = addnd->next;
			if (head == addnd->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptrhd);
				return (numnode);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		numnode++;
	}
	free_listp(&ptrhd);
	return (numnode);
}
