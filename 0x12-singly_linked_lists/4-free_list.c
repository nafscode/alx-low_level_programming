#include "lists.h"

/**
 * free_list - A function that frees a list_t list
 * @head: Beginning of the list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *current;

	current = head;
	
	while (current != NULL)
	{
		head = current->next;
		free(current->str);
		free(current);
	}
}
