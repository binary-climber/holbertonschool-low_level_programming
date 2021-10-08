 #include "main.h"
/*
 * times table
 *
 */
void times_table(void)
{
	int i;
	int j;

	for (j = '0'; j <= '9'; j++)
	{
	for (i = '0'; i <= '9'; i++)
	{
		if (i != 9)
		{
			_putchar(j);
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(j);
			_putchar('\n');

		}
	}
	}

}
