#include "main.h"

/**
 * reverse - A function that reverse a string
 * @s: parameter
 * Return: reversed string
 */

char reverse(char *s)
{
	char a;

	if (*s)
	{
		a = reverse(s + 1);
		a += _putchar(*s);
	}
	return (a);
}

/**
 * print - A function that prints a string
 * @s: parameter
 * Return: string
 */

char print(char *s)
{
	char a;

	if (*s)
	{
		a = _putchar(*s);
		a += print(s + 1);
	}
	return (a);
}
/**
 * is_palindrome - A function that returns 1 if a string is a palindrome
 * and 0 if not.
 * @s: string parameter
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	char normal = print(s);
	char turned = reverse(s);

	if (*s == '\0')
		return (1);
	if normal == turned
		return (1);
	else
		return (0);
}
