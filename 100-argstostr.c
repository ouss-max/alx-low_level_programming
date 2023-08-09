#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	char *outchar;

	int c, i, j, li;

	if (ac == 0)
		return (NULL);
	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}
		outchar = malloc((c + 1) * sizeof(char));
		if (outchar == NULL)
		{
			free(outchar);
			return (NULL);
		}
		for (i = j = li = 0; li < c; j++, li++)
		{
			if (av[i][j] == '\0')
			{
				outchar[li] = '\n';
				i++;
				li++;
				j = 0;
			}
			if (li < c - 1)
				outchar[li] = av[i][j];
		}
		outchar[li] = '\0';
	return (outchar);
}
