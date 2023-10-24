#include <stdio.h>

/**
 * bmain - first function to excute
 * Return: void.
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow\n");
	printf(",I bore my house upon my back!\n");
}
