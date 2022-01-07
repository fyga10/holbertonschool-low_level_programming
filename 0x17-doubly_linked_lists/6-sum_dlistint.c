#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list.
 * @head: main node
 * Return: all data sum
 */
int sum_dlistint(dlistint_t *head)
{
	int add;

	add = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			add += head->n;
			head = head->next;
		}
	}
	return (add);
}
