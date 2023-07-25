#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: String array
 * Return: no return.
 */

void print_rev(char *s)
{
	int l = strlen(s);

	while (l--)
		putchar(*(s + l));
	putchar(10);
}
