#include "lists.h"

/**
 * free_listint2 - A function that frees a list by setting the head to NULL
 * @head: beginning of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = head;
	while (temp->next->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = NULL;
}
