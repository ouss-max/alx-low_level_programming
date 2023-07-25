#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int i = 0, j, k;
	char *ts, temp;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	ts = s;

	for (j = 0; j < (i - 1); j++)
	{
		for (k = i + 1; k > 0; k--)
		{
			temp = *(ts + k);
			*(ts + k) = *(ts + (k - 1));
			*(ts + (k - 1)) = temp;
		}
	}
}
