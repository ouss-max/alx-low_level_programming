#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_random_passwords - generates random valid passwords
 * Return: 0 (on success).
 */
int generate_random_passwords(void)
{
    int password, sum;

    srand(time(NULL));
    sum = 0;
    while (sum <= 2645)
    {
        password = (rand() % 128);
        sum += password;
        printf("%c", password);
    }
    printf("%c", 2772 - sum);

    return 0;
}

int main(void)
{
    generate_random_passwords();
    return 0;
}

