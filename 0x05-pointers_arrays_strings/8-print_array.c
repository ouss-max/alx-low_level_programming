#include "main.h"
#include <stdio.h>

/**
 * print_array - prints b elements of an array of integers
 * @a: input array
 * @b: input n elements
 * Return: no return
 */
void print_array(int *a, int b)
{
	int i = 0;

	for (; i < b; i++)
	{
		printf("%d", *(a + i));
		if (i != (b - 1))
			printf(", ");
	}
	printf("\n");
}
