#include "main.h"

/**
 * reverse - A function that reverse a string
 * @s: parameter
 */

void reverse(char *s)
{
	if (*s)
	{
		reverse(s + 1);
		_putchar(*s);
	}
}

/**
 * print - A function that prints a string
 * @s: parameter
 */

void print(char *s)
{
	if (*s)
	{
		_putchar(*s);
		print(s + 1);
	}
}
/**
 * is_palindrome - A function that returns 1 if a string is a palindrome
 * and 0 if not.
 * @s: string parameter
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	if (print(s) == reverse(s))
		return (1);
	else
		return (0);
}
