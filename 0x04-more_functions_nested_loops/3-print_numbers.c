#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9, followed by a new line.
 * Return: no return.
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
