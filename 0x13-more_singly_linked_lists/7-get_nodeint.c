#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of a list
 * @head: beginning of the list
 * @index: index
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *temp;

	temp = head;
	count = 0;
	while (temp != NULL)
	{
		if (count == index)
			return (current->n);
		count++;
		current = current->next;
	}
}
