#include <stdio.h>

/**
 * main - Entry Point 
 * prints all possible combinations of single-digit numbers.
 * Return : 0 Always (success)
 */

int main(void)
{
int m2, m1;
int i = 0;

       		 for (m1 = '0'; m1 != ('8' + 1); m1++)
        	{
                for (m2 = '1' + i; m2 != ('9' + 1); m2++)
                {
                putchar(m1);
                putchar(m2);
                if (!((m1 == '8') && (m2 == '9')))
                        {
                        putchar(',');
                        putchar(' ');
                        }

                }
        i++;
        }
        putchar('\n');
        return (0);
}

