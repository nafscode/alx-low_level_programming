#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all the arguments of your program
 * @ac: integer parameter
 * @av: character parameter(pointer to an array)
 * Return: pointer to a new sring or NULL
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	
	char *str_ptr;
	int i;

	str_ptr = malloc(sizeof(char) * ac);
	
	if (str_ptr == NULL)
	{
		return (NULL);
	}
	else
		for (i = 0; i < ac; i++)
		{
			str_ptr[i] = av[i];
			str_ptr += '\n';
		}

	return (str_ptr);
}

