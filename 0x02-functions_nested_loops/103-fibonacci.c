#include "main.h"
#include <stdio.h>

/**
 * main - Prints the add of the evens
 * fibonacci numbers.
 *
 * Return:  0.
 */
int main(void)
{
	long int a, b, fb, efb;

	a = 1;
	b = 2;
	fb = efb = 0;
	while (fb <= 4000000)
	{
		fb = a + b;
		a = b;
		b = fb;
		if ((a % 2) == 0)
		{
			efb += a;
		}
	}
	printf("%ld\n", efb);
	return (0);
}
