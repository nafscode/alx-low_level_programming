#include "main.h"
#include <stdlib.h>
/**
 * lenght - Calculates the lenght of a string
 * @s1: string
 * Return: lenght
 */

unsigned int lenght(char *s1)
{
	unsigned int i;

	if (s1 == NULL)
		return (0);
	for (i = 0; s1[i] != '\0'; i++)
	{}

	return (i);
}

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 the new memory will contain
 * Return: pointer to the memory allocaed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j, len1, len2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = lenght(s1);
	len2 = lenght(s2);
	if (n >= len2)
		n = len2;

	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';

	return (str);
}

