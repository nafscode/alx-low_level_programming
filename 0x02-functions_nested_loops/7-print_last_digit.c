#include "main.h"

/**
 * main - A function that prints the
 * last digit of a number
 * Return: 0
 */

int print_last_digit(int x)
{
	if (x <= 0 && x >=9)
	{
		return (x);
	}
	else
	{
		return (_abs(x % 10));
	}
}
