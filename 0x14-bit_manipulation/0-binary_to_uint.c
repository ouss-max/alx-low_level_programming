#include "main.h"

/**
 * binary_to_uint - converts from binary int  to unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int l, bn;

	if (!b)
		return (0);

	i = 0;

	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, bn = 1; l >= 0; l--, bn *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}

		if (b[l] & 1)
		{
			i += bn;
		}
	}

	return (i);
}
