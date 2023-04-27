#include <stdio.h>

int main(void)
{
	int i, j, size;
	size = 5;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= i; j++)
		{
//			putchar(' ');
//		}
//		for (j = 1; j <= i; j++)
//		{
			putchar('#');
		}
		putchar('\n');
	}
	return (0);
}
