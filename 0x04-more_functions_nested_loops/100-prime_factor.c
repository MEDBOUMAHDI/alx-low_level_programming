#include <stdio.h>

/**
*main- prints the largest prime factor
*of a number
*Return: returns 0 always (success)
*/

int main(void)
{
    long num = 612852475143;
    int increment;

    while (increment++ < num / 2)
    {
        if (num % increment == 0)
        {
            num /= 2;
            continue;
        }

        for (increment = 3; increment < num / 2; increment += 2)
        {
            if (num % increment == 0)
                num /= increment;
        }
    }
    printf("%ld\n", num);
    return (0);
}
