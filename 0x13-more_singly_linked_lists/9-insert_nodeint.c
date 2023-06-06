#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node
 * at a given position
 * @head: list
 * @idx: index
 * @n: new data
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *new_node;
	listint_t *current;

	current = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = current;
		*head = new_node;
		return (new);
	}

	for (count = 0; count < (idx - 1); count++)
	{
		if (current == NULL || temp->next == NULL)
			return (NULL);
		current = current->next;
	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
