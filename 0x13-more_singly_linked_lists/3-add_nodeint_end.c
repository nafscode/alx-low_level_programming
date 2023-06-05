#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at the end of a list
 * @head: beginning of list
 * @n: integer
 * Return: address of the new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const in n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (*head);
}
