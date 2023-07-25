#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * @new: destination.
 * @old: source.
 * Return: the pointer to new.
 */
char *_strcpy(char *new, char *old)
{
	int i = 0;

	while (i >= 0)
	{
		*(new + i) = *(old + count);
		if (*(old + i) == '\0')
			break;
		i++;
	}
	return (new);
}
