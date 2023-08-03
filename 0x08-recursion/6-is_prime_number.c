#include <main.h>

/**
 * is_prime - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */


int is_prime_number(int n)
{
    if (n < 2)
        return 0;
    else
    {
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return 0;
        return 1;
    }

}
