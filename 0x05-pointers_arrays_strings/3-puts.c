#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @s: string to print
 *
 * Description: prints a string
 * On success: returns no error
 */

void _puts(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		putchar(*(s + i));
		i++;
	}
	putchar(10);
}
