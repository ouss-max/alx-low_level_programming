#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates the memory
 * @ptr: pointer to the allocated memory
 * @old_size: size of the allocated space
 * @new_size: new size of the new memory space
 *
 * Return: ptr.
 * if new_size == old_size, returns ptr=
 * if malloc fails, returns NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
