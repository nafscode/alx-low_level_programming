#include "lists.h"

/**
* print_listint - A function that prints all the elements of a list.
* @h: linked list.
*
* Return: numbers of nodes.
*/

size_t print_listint(const listint_t *h)
{
	listint_t *temp = h
	size_t len = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		len++;
	}
	return (len);
}
