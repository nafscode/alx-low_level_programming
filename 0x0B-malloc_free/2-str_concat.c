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
	char *s3;
	unsigned int n = strlen(s1);
	unsigned int m = strlen(s2);

	s3 = (char *)malloc(n + m + 2);
	if (s3 == NULL)
		return (NULL);
	
	for (i = 0; i <= n; i++)
		*s3++ = *s1++;
	for (i = 0; i <= m; i++)
		*s3++ = *s2++;
	return (s3);
}
