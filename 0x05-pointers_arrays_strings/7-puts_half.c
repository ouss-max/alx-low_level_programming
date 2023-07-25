#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @s: input string.
 * Return: no return.
 */
void puts_half(char *s)
{
	int i = 0, j;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}

	if (i % 2 == 1)
		j = i / 2;
	else
		j = (i - 1) / 2;
	for (j++; j < count; j++)
		putchar(s[j]);
	putchar('\n');
}
