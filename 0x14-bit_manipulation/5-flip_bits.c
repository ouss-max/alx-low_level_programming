#include "main.h"

/**
 * flip_bits - return the number of the bits 
 * @n: first number.
 * @m: second number.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num;

	for (num = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			num++;
	}

	return (num);
}
