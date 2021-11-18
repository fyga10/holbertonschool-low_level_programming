#include "lists.h"

/**
 * add_nodeint - add a node
 * @head: double pointer
 * @n: int
 * Return: created node or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	new_node->n = n;

	*head = new_node;

	return (new_node);
}