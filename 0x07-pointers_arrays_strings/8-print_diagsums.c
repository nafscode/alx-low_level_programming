#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: parameter
 * @size: parameter
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + i) == 0)
		{
			sum1 += *(a + i);
		}
		if (i % (size - 1) == 0 && i < size * size - 1)
		{
			sum2 += *(a + i);
		}
	printf("%d, %d", sum1, sum2);
}
