#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @a: input string.
 * Return: length of a string.
 */
int _strlen(char *a)
{
	int i = 0;

	while (*(a + i) != '\0')
		i++;
	return (i);
}
