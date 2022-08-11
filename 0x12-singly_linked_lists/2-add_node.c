#include "lists.h"
/**
 * add_node - adds a new node at the beginning of the list_t list
 * @head: double pointer to list_t
 * @str: pointer to the first node in the list_t
 * Return: a poitner to the new string or NULL fails
 */
list_t *add_node(list_t **head, const char *str)
{
	int count = 0;
	list_t *new_node;

	if (!str)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node)
	{
		/* Create a copy with strdup function to duplicate */
		new_node->str = strdup(str);

		if (new_node->str)
		{
			while (new_node->str[count])
				count++;

			new_node->len = count;
			new_node->next = *head;
			*head = new_node;

			return (new_node);
		}

		/*Freed the memory allocated */
		free(new_node);
		return (NULL);
	}

	return (NULL);
}
