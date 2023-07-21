#include "main.h"

/**
 * print_triangle - prints a triangle followed by a line.
 * @n: numbers of lines.
 * Return: no return.
 */
void print_triangle(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 1; j < (n - i); j++)
			_putchar(' ');
		for (j--; j < n; j++)
			_putchar(35);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
