#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the sring given as a parameter.
 * @str: string parameter
 * Return: a pointer
 */

char *_strdup(char *str)
{
	int i;
	char *copy;
	int n = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	copy = malloc((n) + 1);

	for (i = 0; i <= n; i++)
	{
		str[i] = copy[i];
	}

	if (copy = NULL)
	{
		return (NULL);
	}
	else
	{
		return (copy);
	}
}
