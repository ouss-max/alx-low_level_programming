#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array.
 * @width: array width .
 * @height: array height.
 *
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
	int **outputtab;

	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	outputtab = malloc(height * sizeof(int *));
	if (outputtab == NULL)
	{
		free(outputtab);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		outputtab[i] = malloc(width * sizeof(int));
		if (outputtab[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(outputtab[i]);
			free(outputtab);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			outputtab[i][j] = 0;
	return (outputtab);
}
