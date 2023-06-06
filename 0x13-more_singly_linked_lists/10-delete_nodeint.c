#include "lists.h"

/**
 * delete_nodeint_at_index - A function that delettes the node at index of
 * a linked list
 * @head: linked list
 * @index: index
 * Returns: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp;
	listint_t *current;

	temp = *head;
	current = *head;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (count = 0; count < index - 1; count++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
