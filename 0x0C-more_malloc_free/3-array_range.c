#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */

int *array_range(int min, int max)
{
	int *b;
	int i;

	if (min > max)
		return (NULL);

	b = malloc(sizeof(*b) * ((max - min) + 1));

	if (b == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		b[i] = min;

	return (b);
}
