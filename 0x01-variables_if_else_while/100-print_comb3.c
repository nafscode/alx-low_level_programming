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

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i);
			putchar(j)
		}
	}
	return (0);
}
