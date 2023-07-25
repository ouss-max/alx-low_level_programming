#include "main.h"
#include <stdio.h>

/**
 * _custom_atoi - converts a string to an integer
 * @str: input string
 * Return: integer
 */
int _custom_atoi(char *str)
{
    unsigned int count = 0, size = 0, result = 0, is_negative = 1, multiplier = 1, i;

    while (*(str + count) != '\0')
    {
        if (size > 0 && (*(str + count) < '0' || *(str + count) > '9'))
            break;

        if (*(str + count) == '-')
            is_negative *= -1;

        if ((*(str + count) >= '0') && (*(str + count) <= '9'))
        {
            if (size > 0)
                multiplier *= 10;
            size++;
        }
        count++;
    }

    for (i = count - size; i < count; i++)
    {
        result = result + ((*(str + i) - 48) * multiplier);
        multiplier /= 10;
    }
    return (result * is_negative);
}

