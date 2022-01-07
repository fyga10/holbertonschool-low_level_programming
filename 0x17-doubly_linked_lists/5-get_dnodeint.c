#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list.
 * @index: index node
 * @head: main node
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
if (head == NULL)
return (NULL);
	i = 0;
	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}
