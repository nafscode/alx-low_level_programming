#include "lists.h"

/**
 * free_listint - A function that frees a list
 * @head: beginning of list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
