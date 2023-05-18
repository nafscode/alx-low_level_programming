#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 the new memory will contain
 * Return: pointer to the memory allocaed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j;
	unsigned int lens1, lens2, lenght;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lens1 = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		lens1++;
	}

	lens2 = 0;
	for (i = 0; s2[i] != '\0'; i++)
	{
		lens2++;
	}

	if (n >= lens2)
		n = lens2;
	lenght = lens1 + n + 1;

	str = malloc(sizeof(char) * lenght);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < lens1; i++)
		str[i] = s1[i];
	for (j = 0; j < lenght; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';

	return (str);
}


