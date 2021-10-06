#include "main.h"
/*
 *
 *alphabet 10 times
 *
 */void print_alphabet_x10(void)
{
	char c;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
