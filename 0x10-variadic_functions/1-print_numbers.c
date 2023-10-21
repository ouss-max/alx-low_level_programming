#include "variadic_functions.h"

/**
 * print_numbers - print the numbers
 * @separator: the string that will be printed between the numbers
 * @n: number of the  integers that will be passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list var_list;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
