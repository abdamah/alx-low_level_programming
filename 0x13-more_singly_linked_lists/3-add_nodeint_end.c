#include "lists.h"

/**
 *add_nodeint_end - adds a node to the end of a linkedList
 *@head: pointer to the head of the list
 *@n: number to be contained by new node.
 *
 *Return: address of the newly added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node)
	{
		new_node->n = n;
		new_node->next = NULL;
	}

	if (current)
	{
		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
	}
	else
		*head = new_node;

	return (new_node);
}
