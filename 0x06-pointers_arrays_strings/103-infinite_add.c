#include "main.h"

/**
 * infinite_add - A function that adds two numbers.
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: buffer size
 * Return: a pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	m1 = 0;
	m2 = 0;

	while (n1[i] != '\0')
	{
		if (n1[i] >= 48 && n1[i] <= 57)
		{
			m1 = m1 * 10 + (n1[i] - 48);
			i++;
		}
	}
	while (n2[i] != '\0')
	{
		if (n2[i] >= 48 && n2[i] <= 57)
		{
			m2 = m2 * 10 + (n2[i] - 48);
			i++;
		}
	}
	if (sizeof(r) == size_r)
	{
		return (m1 + m2);
	}
	else 
	{
		return (0);
	}
}
