#include <stdio.h>
/*
 * size of variables
 */int main(void)
{
	printf("Size of a char: %lu bytes(s)\n", sizeof(char));
	printf("Size of an int: %lu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(long int));
	printf("Size of a long log int: %lu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %lu bytes(s)\n", sizeof(float));
	return (0);
}
