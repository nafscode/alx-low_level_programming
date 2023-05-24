#include "function_pointers.h"

/**
 * print_name - A function that prints a name.
 * @name: name
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
