#include "main.h"
/*
 * time stamp
 */void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (l = '0'; l <= '2'; l++)
	{
		for (k = '0'; k <= '9'; k++)
		{
			if (l == '2' && k == '4')
			{
				break;
			}
			for (j = '0'; j <= '5'; j++)
			{
				for (i = '0'; i <= '9'; i++)
				{
					_putchar(l);
					_putchar(k);
					_putchar(':');
					_putchar(j);
					_putchar(i);
					_putchar('\n');
				}
			}
		}
	}
}
