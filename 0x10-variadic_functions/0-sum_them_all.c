#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all the values
 * @n: number of the arguments
 *
 * Return: sum of its values
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list var_list;
	unsigned int i;
	int s = 0;

	if (n == 0)
		return (0);

	va_start(var_list, n);

	for (i = 0; i < n; i++)
		s += va_arg(var_list, int);

	va_end(var_list);

	return (s);
}
