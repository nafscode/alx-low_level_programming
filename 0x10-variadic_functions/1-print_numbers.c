#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers, followed by a new line
 * @seperator: Seperator
 * @n: numbers of arguments
 * Return: nothing
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int count;

	va_list args;

	va_start(args, n);

	for (count = 0; count < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (seperator != NULL && i != n - 1)
		{
			printf("%s", seperator);
		}
	}
	va_end(args);
	printf("\n");
}
