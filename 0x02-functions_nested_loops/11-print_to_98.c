#include "main.h"
#include <stdio.h>
/*
 *
 * print 98
 *
 */void print_to_98(int n)
{
        int i;

        if (n < 98)
        {
                for (i = n; i <= 98; i++)
                {
                        printf("%d", i);
                        if (i != 98)
                        {
                                putchar(',');
                                putchar(' ');
                        }

                }
        }

        else if (n == 98)
        {
                printf("%d", n);
        }

        else
        {
                for (i = n; i >= 98; i--)
                {
                        printf("%d", i);
                        if (i != 98)
                        {
                                putchar(',');
                                putchar(' ');
                        }

                }
        }
        printf("\n");
}
