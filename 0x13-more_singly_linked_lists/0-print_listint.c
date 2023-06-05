#include "lists.h"

/**
 * print_listint - A function that prints all the eleents of a listint_t list
 * @h: linked list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		lenght++;
	}

	return (lenght);
}
