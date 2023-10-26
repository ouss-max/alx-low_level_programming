#include "main.h"

/**
 * get_endianness - check the endianness
 *
 * Return: 0 if big endian
 *  1 if little endian
 */
int get_endianness(void)
{
	unsigned int i;
	char *ch;

	i = 1;
	ch = (char *) &i;

	return ((int)*ch);
}
