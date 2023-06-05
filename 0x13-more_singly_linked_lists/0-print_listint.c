#include "lists.h"

/**
 * print_listint - A function that prints all the eleents of a listint_t list
 * @h: linked list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const lisint_t *temp = h;
	size_t lenght = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		lenght += 1;
		temp = temp->next;
	}

	return (lenght);
}
