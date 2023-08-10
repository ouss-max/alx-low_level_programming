#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *outputref;

	unsigned int i, j, k, li;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	outputref = malloc(sizeof(char) * (i + j + 1));
		if (outputref == NULL)
	{
		free(outputref);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		outputref[k] = s1[k];
	li = j;
	for (j = 0; j <= li; k++, j++)
		outputref[k] = s2[j];
	return (outputref);
}
