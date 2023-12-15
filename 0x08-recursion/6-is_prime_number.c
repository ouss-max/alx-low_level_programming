#include <main.h>

/**
 * is_prime - detects if an integer is a prime number
 * @n: input 
 * Return: 1 if it's a prime,0 if it's not
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
