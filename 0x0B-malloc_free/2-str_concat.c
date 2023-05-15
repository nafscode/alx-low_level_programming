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
	strcpy(s3, s2);
	strcpy(s3, s2);

	return (s3);
}
