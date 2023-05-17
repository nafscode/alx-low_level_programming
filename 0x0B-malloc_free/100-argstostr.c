#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: character parameter(pointer to an array)
 * Return: pointer to a new sring or NULL
 */

char *argstostr(int ac, char **av)
{
	char **str_ptr;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	if (ac == 0 || av == NULL)
		return (NULL);

	str_ptr = malloc(sizeof(*str_ptr) * ac);
	
	if (str_ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		str_ptr[i] = av[i];
		str_ptr[i] += '\n';
	}
	
	return (*str_ptr);
}
