#include <stdio.h>
#include <unistd.h>
/**
 * main - Ommit some alphabet
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	return (0);
}
