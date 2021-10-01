#include <stdio.h>
/*
 * size of variables
 */int main(void)
{
	printf("Siz of a char: %lu bytes(s)\n", sizeof(char));
	printf("Siz of an int: %lu bytes(s)\n", sizeof(int));
	printf("Siz of a long int: %lu bytes(s)\n", sizeof(long int));
	printf("Siz of a long log int: %lu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %lu bytes(s)\n", sizeof(float));
	return (0);
}
