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
	char *str_ptr;
	char *word;
	int i;
	int j;
	int lenght;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0, lenght = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, lenght++)
			;
		lenght++;
	}
	lenght++;

	str_ptr = malloc(sizeof(char) * lenght);
	if (str_ptr == NULL)
		return (NULL);

	word = str_ptr;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*str_ptr = av[i][j];
			str_ptr++;
		}
		*str_ptr = '\n';
		str_ptr++;
	}

	return (word);
}
