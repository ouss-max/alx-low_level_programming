#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet in lowercas followed by a new line
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
