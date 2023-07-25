#include "main.h"
#include <stdio.h>


/**
 * puts2 -  prints every other character of a string
 * @s: input string.
 * Return: no return.
 */

void puts2(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(s + i));
		i++;
	}
	putchar(10);
}
