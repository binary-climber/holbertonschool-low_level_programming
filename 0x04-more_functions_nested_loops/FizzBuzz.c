#include <stdio.h>

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i%3 == 0)
		{
			printf("%s ", "Fuzz");
		}
		else if (i%5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else
			printf("%d ", i);
	}
	putchar('\n');
	return (0);
}
