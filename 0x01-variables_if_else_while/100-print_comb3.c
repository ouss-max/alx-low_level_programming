#include <stdio.h>

/**
 *main - Print numbers from 00 to 89.
 *
 *Return: 0
 */
int main(void)
{
	int i, n;

	i = 48;
	n = 48;
	while (n < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (n != i && n < i)
			{
				putchar(n);
				putchar(i);
				if (i == 57 && n == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
