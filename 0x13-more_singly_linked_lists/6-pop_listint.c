#include "lists.h"

/**
 * pop_listint - A function that delete the head node of a list
 * and returns the node's data
 * @head: head node
 * Return: node's data or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int result;

	current = *head;

	if (*current == NULL)
		return (0);

	result = current->n;
	(*head) = (*head)->next;
	free(current);

	return (result);
}
