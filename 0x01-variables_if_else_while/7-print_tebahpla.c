#include <stdio.h>

/**
 * main - prints lowercase alpahbet
 * in reverse
 * Return: 0
 */

int main(void)
{
	for (char ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
