#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * this program prints "Programming is building a multilingual puzzle"
 * Return: 0
 */
int main(void)
{
	char v;
	int w;
	long x;
	long long y;
	float z;

	printf("Size of a char: %1 byte(s)\n", sizeof(v));
	printf("Size of an int: %4 byte(s)\n", sizeof(w));
	printf("Size of a long int: %4 byte(s)\n", sizeof(x));
	printf("Size of a long long int: %8 byte(s)\n", sizeof(y));
	printf("Size of a float: %4 byte(s)\n", sizeof(z)); 
	return (0);
}
