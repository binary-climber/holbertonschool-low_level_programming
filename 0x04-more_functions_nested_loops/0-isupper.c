#include "main.h"

/**
 * _isupper - Check if the character is uppercase
 * @c: Character to compare
 *
 * Return: if the character is uppercase, return 1, else return 0
 */

int _isupper(int c)
{
	int i;
	int a;

	a = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			a = 1;
		}
	}
	return (a);
}
