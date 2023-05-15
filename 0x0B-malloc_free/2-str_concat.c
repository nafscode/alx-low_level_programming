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
	unsigned int i;
	unsigned int j;
	char *s3;
	unsigned int n = strlen(s1);
	unsigned int m = strlen(s2);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s3 = malloc(sizeof(char) * (n + m + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
		s3[i] = s1[i];

	for (j = 0; j <= m; j++)
		s3[j] = s2[j];

	return (s3);
}
