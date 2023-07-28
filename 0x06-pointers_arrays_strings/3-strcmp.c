#include "main.h"
#include <stdio.h>

/**
 *_strcmp - compares two strings
 *@s1: first string.
 *@s2: second string.
 *Return: 0 if s1 and s2 are equals,
 *another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, k = 0;

	while (k == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		k = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (k);
}
