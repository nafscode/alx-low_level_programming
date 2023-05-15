#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - A function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int k;
	unsigned int limit;
	char *s3;
	unsigned int i = strlen(s1);
	unsigned int j = strlen(s2);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	
	s3 = malloc(sizeof(char) * (i + j + 1));

	if (s3 == NULL)
	{
		free(s3);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		s3[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		s3[k] = s2[j];

	return (s3);
}
