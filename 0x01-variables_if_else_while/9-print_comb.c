#include <stdio.h>
/*
 *combinations
 *
 */int main(void)
{
	int i;

	for (i = '0'; i <='9'; i++)
	{
		if (i != '9')
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}
		else
			putchar('9');
	}
	 return (0);



}
