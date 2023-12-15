#include "variadic_functions.h"

/**
 * print_numbers - print the numbers.
 * @separator: string that will beprinted
 *  between numbers.
 * @n: number of integers arguments of a  function.
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list varlist;
	unsigned int i;

	va_start(varlist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(varlist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(varlist);
}
