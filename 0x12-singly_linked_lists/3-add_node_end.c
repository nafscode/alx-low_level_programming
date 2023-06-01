#include "lists.h"

/**
 * add_node_end - A function that add a new node at the end of a list_t list
 * @head: beginning of the list
 * @str: String to be added
 * Return: address of head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	size_t lenght;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (lenght = 0; str[lenght]; lenght++)
		;

	new_node->len = lenght;
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}
