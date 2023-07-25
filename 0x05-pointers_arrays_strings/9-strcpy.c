#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by oarr,
 * including the terminating null byte, to the
 * buffer pointed to by narr.
 * @narr: new array.
 * @oarr: old array.
 * Return: the pointer to narr.
 */
char *_strcpy(char *narr, char *oarr)
{
	int count = 0;

	while (count >= 0)
	{
		*(narr + count) = *(oarr + count);
		if (*(oarr + count) == '\0')
			break;
		count++;
	}
	return (narr);
}
