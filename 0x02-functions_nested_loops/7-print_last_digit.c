#include "main.h"

/**
 * print_last_digit - A function that prints the
 * last digit of a number
 * @x: parameter
 * Return: 0
 */

int print_last_digit(int x)
{
	if (x < 0)
	{
		return (-1 * (x % 10));
	}
	else
	{
		return (x % 10);
	}
}
