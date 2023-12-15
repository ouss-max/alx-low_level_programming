#include "variadic_functions.h"

/**
 * print_strings - prints= a string
 * @separator: string that will be printed between the strings
 * @n: number of strings that will be pass to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *strin;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		strin = va_arg(valist, char *);

		if (strin)
			printf("%s", strin);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
