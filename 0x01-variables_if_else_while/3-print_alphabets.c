#include <stdio.h>

/**
 * main - Prints alphabet in lowercase
 * and then in uppercase
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar(c - 32);
	}
	putchar('\n');
	return (0);
}
