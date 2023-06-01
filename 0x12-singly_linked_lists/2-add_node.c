#include "lists.h"

/**
 * add_node - A function that add a new node at the beginning of a list_t list
 * @head: beginning of the list
 * @str: string to store in the list
 * Return: address of head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t lenght;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (lenght = 0; str[lenght]; lenght++)
		;

	new_node->len = lenght;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
