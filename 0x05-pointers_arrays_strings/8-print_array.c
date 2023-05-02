#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * print_array - A function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: 1st parameter
 * @n: 2nd parameter
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
