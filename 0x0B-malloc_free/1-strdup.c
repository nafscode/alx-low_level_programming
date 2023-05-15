#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the sring given as a parameter.
 * @str: string parameter
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *copy;
	n = strlen(s);

	if (str == NULL)
		return (NULL);
	copy = malloc((n) + 1);

	for (i = 0; i <= n; i++)
	{
		str[i] = copy[i];
	}
	if (copy = NULL)
		return (NULL);
	return (copy);
}
