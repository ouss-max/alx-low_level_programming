#include "main.h"
#include <stdio.h>

/**
 *leet - encodes a string into 1337
 *@s: input string.
 *Return: the pointer to dest.
 */

char *leet(char *s)
{
	int i = 0, j = 0;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + j) != '\0')
	{
		for (i = 0; i < 5; i++)
	{
		if (*(s + j) == low_letters[i] || *(s + j) == upp_letters[i])
		{
			*(s + j) = numbers[i];
				break;
		}
	}
		j++;
	}
	return (s);
}
