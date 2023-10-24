#include "lists.h"

/**
 * find_listint_loop - find loop in a linked list.
 * @head: the head of list.
 *
 * Return: the address of the node where the loop beggins.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pt;
	listint_t *prevnd;

	pt = head;
	prevnd = head;
	while (head && pt && pt->next)
	{
		head = head->next;
		pt = pt->next->next;

		if (head == pt)
		{
			head = prevnd;
			prevnd =  pt;
			while (1)
			{
				pt = prevnd;
				while (pt->next != head && pt->next != prevnd)
				{
					pt = pt->next;
				}
				if (pt->next == head)
					break;

				head = head->next;
			}
			return (pt->next);
		}
	}

	return (NULL);
}
