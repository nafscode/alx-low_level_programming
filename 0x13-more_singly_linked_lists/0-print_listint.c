#include "lists.h"

/**
* print_listint - A function that prints all the elements of a list.
* @h: linked list.
*
* Return: numbers of nodes.
*/

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
