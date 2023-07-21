#include "main.h"
#include <stdio.h>

/**
 *main - prints Buzz for multiples of 3.
 *prints Fizz for multiples of 5.
 *prtint FizzBuzz for multiples of both.
 *Return: Always 0.
 */

int main(void)
{
	int n;

	n = 2;
	printf("%d", 1);
	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
		printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
		printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
		printf(" Buzz");
		}
		else
		{
		printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}
