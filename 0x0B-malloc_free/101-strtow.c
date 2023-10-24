#include <stdlib.h>
#include "main.h"

/**
 * count_word - count the number of words in a string
 * @s: string to calculate
 *
 * Return: number of the words
 */
int count_word(char *s)
{
	int fk, mk, wk;

	fk = 0;
	wk = 0;

	for (mk = 0; s[mk] != '\0'; mk++)
	{
		if (s[mk] == ' ')
			fk = 0;
		else if (fk == 0)
		{
			fk = 1;
			wk++;
		}
	}

	return (wk);
}
/**
 * **strtow - splits a string into words
 * @str: the string to br splited
 *
 * Return: pointer to an array of strings
 * or NULL in failure
 */
char **strtow(char *str)
{
	char **tab, *temp;
	int i, k = 0, lengh = 0, numwords, c = 0, first, last;

	while (*(str + lengh))
		lengh++;
	numwords = count_word(str);
	if (numwords == 0)
		return (NULL);

	tab = (char **) malloc(sizeof(char *) * (numwords + 1));
	if (tab == NULL)
		return (NULL);

	for (i = 0; i <= lengh; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				last = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (first < last)
					*temp++ = str[first++];
				*temp = '\0';
				tab[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			first = i;
	}

	tab[k] = NULL;

	return (tab);
}
