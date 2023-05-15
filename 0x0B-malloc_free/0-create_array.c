#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * creae_array - A function that creates an array of chars,
 * and initialize it with a specific char.
 * @size: size of array
 * @c: character to be initialized
 * Return: a pointer to the array of NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	arr = malloc(sizeof(size));
	arr[0] = c;

	if (arr == 0)
	{
		return (NULL);
	}
	else
	{
		return (arr);
	}
}
