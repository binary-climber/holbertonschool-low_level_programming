 #include "main.h"

/**
* print_diagonal - Function that draws a diagonal line on the terminal.
* @n: number
* Return: 0 or 1
*/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (i != n - 1)
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
