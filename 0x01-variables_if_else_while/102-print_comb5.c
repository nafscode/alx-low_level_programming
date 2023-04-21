#include <stdio.h>

/**
 * main - Write a program that
 * prints all possible combinations
 * of two two-digit numbers.
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int m;
	int n;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (m = i; m < 58; m++)
			{
				for (n = j + 1; n < 58; n++)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(m);
					putchar(n);

					if (i == 57 && j == 56 && m == 57 && n == 57)
						continue;

					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
