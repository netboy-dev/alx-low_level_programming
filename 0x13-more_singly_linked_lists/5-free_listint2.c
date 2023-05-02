#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 *
 * @head: Double pointer to the head node of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;
	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
	*head = NULL;
}

