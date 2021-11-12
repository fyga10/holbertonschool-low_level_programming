#include "lists.h"

/**
 * free_list - frees the memory of the list
 *
 * @head: list
 */

void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
