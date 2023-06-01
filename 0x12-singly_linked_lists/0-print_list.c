#include <stdio.h>
#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list_t list.
 * @h: linked list
 * Return: number of elements printed
 */

size_t print_list(const list_t *h)
{
	size_t lenght;

	lenght = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		lenght++;
	}

	return (lenght);
}
