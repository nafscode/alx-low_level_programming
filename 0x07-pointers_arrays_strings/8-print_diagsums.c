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

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i -1];
		a += size;

	printf("%d, %d\n", sum1, sum2);
}
