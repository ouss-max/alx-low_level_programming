#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a duplicate of the given string.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the newly allocated duplicate string,
 *         or NULL if memory allocation fails or if str is NULL.
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	strout = (char *) malloc(sizeof(char) * (i + 1));

	if (strout == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strout[j] = str[j];

	return (strout);
}