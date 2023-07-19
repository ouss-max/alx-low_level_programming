#include "main.h"
#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci sequence
 *
 * Return:  0.
 */
int main(void)

{

	int c;

	long int a, b, fb;



	a = 1;

	b = 2;

	printf("%ld, %ld", a, b);

	for (c = 0; c < 48; c++)

	{

		fb = a + b;

		printf(", %ld", fb);

		a = b;

		b = fb;

	}

	printf("\n");

	return (0);

}
