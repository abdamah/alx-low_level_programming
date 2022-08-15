#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: double pointer to the head of the linkedList.
 * @idx: is the index of the list where the new node should be inserted
 * @n: content of the list.
 * Return:A address of the new node or null if fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;

	while (is_valid(current, idx))
	{
		count++;
		current = current->next;
	}

	if (is_valid(current, idx))
	{
		new_node->next = current->next;
		current->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}

/**
 * is_valid - checks validity of current node.
 * @current: pointer to the current of the linkedList.
 * @index: index of the current node.
 * Return: 1 if valid or 0 if fails.
 */

int is_valid(listint_t *current, int index)
{
	int count = 0;

	return (count == index - 1 && current != NULL);
}
