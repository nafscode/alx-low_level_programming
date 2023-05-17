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
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	
	char *str_ptr, *start;
	int i, j, lenght;

	if (ac == 0 || av == NULL)
		return (NULL);

	lenght = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, lenght++)
			;
		lenght++;
	}
	lenght++;

	start = malloc(lenght * sizeof(char));
	if (start == NULL)
		return (NULL);
	
	str_ptr = start;
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
		{
			start = av[i][j];
			start++;
		}
		*start = '\n';
		start++;
	
	return (str_ptr);
}
