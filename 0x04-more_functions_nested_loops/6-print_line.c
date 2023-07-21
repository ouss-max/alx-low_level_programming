#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @i: times straight line is printed.
 * Return: no return.
 */
void print_line(int i)
{
	int j;

	for (j = 0; j < i; j++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
