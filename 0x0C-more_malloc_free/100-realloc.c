#include "main.h"
#include <stdlib.h>

/**
 * _realloc - A function that reallocates a memory block using malloc and free
 * @ptr: previous pointer to the memory
 * @old_size: size of ptr
 * @new_size: size of new pointer
 * Return: pointer to new allocated space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr, *char_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	char_ptr = ptr;

	new_ptr = malloc(sizeof(char) * new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = char_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
