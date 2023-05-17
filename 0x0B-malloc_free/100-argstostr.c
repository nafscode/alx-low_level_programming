#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	int i, lenght, index;

	lenght = 0;
	for (i = 0; i < ac; i++)
	{
		lenght += strlen(av[i]) + 1;
	}

	str_ptr = malloc(sizeof(char) * lenght);
	if (str_ptr == NULL)
		return (NULL);

	index = 0;
	for (j = 0; i < ac; j++)
	{
		strcpy(str_ptr + index, av[i]);
		index += strlen(av[i]);
		str_ptr[index++] = '\n';
	}
	str_ptr[index-1] = '\0';

	return (str_ptr);
}
