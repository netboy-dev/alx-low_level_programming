#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t linked list.
 * @head: A pointer to the list_t list to free.
 *
 * Return: Always void.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}

