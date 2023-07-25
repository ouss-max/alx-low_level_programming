i#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - generates random valid passwords
 *Return: 0 (on success).
 *
 */
int main(void)
{
	int pw, k;

	srand(time(NULL));
	sum = 0;
	while (k <= 2645)
	{
		pw = (rand() % 128);
		k += pw;
		printf("%c", pw);
	}
	printf("%c", 2772 - k);

	return (0);
}
