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
	arr = malloc(sizeof(int) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			arr[j][i] = 0;
		}
	}
	
	return (arr);
}
