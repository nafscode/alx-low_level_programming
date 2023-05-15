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

	s3 = (char *) malloc(strlen(s1) + strlen(s2));

	strcpy(s3, s1);

	while (*s2 != '\0')
		*s3++ = *s2++;
	*s3 = '\0';
	
	return (s3);
}
