#include <stdio.h>

/**
 * main - Write a program that prints
 * all possible different combinations
 * of two digits.
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
