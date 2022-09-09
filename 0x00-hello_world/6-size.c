#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char v;
	int w;
	long int x;
	long long int y;
	float z;

	printf("Size of a char: %1 byte(s)\n", sizeof(v));
	printf("Size of an int: %4 byte(s)\n", sizeof(w));
	printf("Size of a long int: %4 byte(s)\n", sizeof(x));
	printf("Size of a long long int: %8 byte(s)\n", sizeof(y));
	printf("Size of a float: %4 byte(s)\n", sizeof(z));
	return (0);
}
