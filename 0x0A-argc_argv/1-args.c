#include <stdio.h>

/**
 * main - prints the number of input arguments.
 * @argc: number of command line input arguments.
 * @argv: array that contains the program command line input arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
