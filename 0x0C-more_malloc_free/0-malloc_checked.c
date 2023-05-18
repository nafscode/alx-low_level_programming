#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - A function that allocated memory using malloc.
 * @b: parameter
 * Return: pointer to the memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
