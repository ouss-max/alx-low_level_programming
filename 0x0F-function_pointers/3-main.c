#include "3-calc.h"

/**
 * main - check the code for ALX students
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int k, m;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	k = atoi(argv[1]);
	m = atoi(argv[3]);

	printf("%d\n", operation(k, m));
	return (0);
}