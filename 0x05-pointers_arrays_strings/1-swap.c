#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @m: first integer.
 * @n: second integer.
 * Return: no return.
 */

void swap_int(int *m, int *n)
{
	int c = *m;
	*m = *n;
	*n = c;
}
