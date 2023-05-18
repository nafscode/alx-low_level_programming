#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: minimum value
 * @max: maximum value(excluded)
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *arr;
	int num;
	int i;

	if (min > max)
		return (NULL);

	num = max - min + 1;

	arr = malloc(sizeof(int) * num);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < num; i++)
		arr[i] = min + i;

	return (arr);
}

