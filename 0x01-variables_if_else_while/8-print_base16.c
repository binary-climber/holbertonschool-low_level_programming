#include <stdio.h>
/*
 *
 */int main(void)
{
	char c[] = "0123456789abcdef";
	int i = 0;

	for (i = 0; i <= 15; i++)
		putchar(c[i]);
	putchar('\n');
	return (0);
}
