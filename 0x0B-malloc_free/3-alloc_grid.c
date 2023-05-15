#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: parameter
 * @height: parameter
 * Return: pointer or NULL
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * width);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(height * sizeof(int));
		if (arr[i] == NULL)
		{
			for (int j = 0; j < i; j++)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}

		for (int j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	

	return (arr);
}
