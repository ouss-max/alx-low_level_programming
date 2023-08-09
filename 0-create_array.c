#include <mainh>
#include <stdlib.h>

/**
 * create_array - Creates an array of characters, and initializes each element
 *                with a given character.
 * @size: The size of the array.
 * @c: The character to be stored in each element of the array.
 *
 * Return: A pointer to the created array, or NULL if memory allocation fails
 *         or size is 0.
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