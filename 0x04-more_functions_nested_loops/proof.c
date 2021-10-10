#include <stdio.h>

/**
 * more_numbers - Print numbers from 0 - 14 ten times
 *
 */

int main(void)
{
        int i, a;

        for (a = 0; a < 10; a++)
        {
                for (i = 0; i <= 14; i++)
                {
                        if (i >= 10)
                                putchar(i / 10 + '0');

                        putchar(i % 10 + '0');
                }
                putchar('\n');
        }
}
