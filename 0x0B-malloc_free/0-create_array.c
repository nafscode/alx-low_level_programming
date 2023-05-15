#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initialize it with a specific char.
 * @size: size of array
 * @c: character to be initialized
 * Return: a pointer to the array of NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);

	if (arr == 0)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			arr[i] = c;
	}
	return (arr);
}
