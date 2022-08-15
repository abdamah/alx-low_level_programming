#include "lists.h"

/**
 *add_nodeint - adds a new_node node at the beginning of linkedList.
 *@head: A pointer to the address of the head of the list
 *@n: the integer for the new_node node to contain
 *
 *Return: returns pointer of the new_node node or null.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
