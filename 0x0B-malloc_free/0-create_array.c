#include<main.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of characters.
 * @size: The size of the array.
 * @c: The character to be stored.
 *
 * Return: A pointer return  NULL if memory allocation fails or size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
