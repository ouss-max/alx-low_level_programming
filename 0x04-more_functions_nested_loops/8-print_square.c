#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @n: size of the square.
 * Return: no return.
 */
void print_square(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(35);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
