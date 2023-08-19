#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: the input
 * @f: ponter to the function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
