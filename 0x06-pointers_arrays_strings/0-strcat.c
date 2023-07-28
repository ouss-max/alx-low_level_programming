#include "main.h"
#include <stdio.h>

/**
 *_strcat - concatenates two strings
 *@new: new string.
 *@old: old string.
 *Return: the pointer to new.
 */

char *_strcat(char *new, char *old)
{
	int i = 0, j = 0;

	while (*(new + i) != '\0')
	{
		i++;
	}
	while (j >= 0)
	{
		*(new + i) = *(old + j);
		if (*(old + j) == '\0')
			break;
		i++;
		j++;
	}
	return (old);
}
