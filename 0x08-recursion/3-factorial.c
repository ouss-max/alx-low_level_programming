#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the given number
 *
 * Return: the factorial of n, or -1 if n is lower than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}