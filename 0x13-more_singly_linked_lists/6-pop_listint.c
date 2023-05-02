#include "lists.h"

/**
 *pop_listint - deletes the head node of a linked list
 *@head: head of the list
 *
 *Return: the deleted node data
 */

int pop_listint(listint_t **head)
{
	listint_t *popped;
	int content;

	if (*head == NULL)
		return (0);

	popped = *head;
	content = popped->n;
	free(popped);

	*head = (*head)->next;
	return (content);
#include "lists.h"

/**
 * pop_listint - returns data from and then deletes/frees memory allocated
 * to the first member of a struct list type listint_t
 *
 * @head: double pointer to the first member of a singly linked list
 * of structs of type listint_s
 *
 * Return: int value of node deleted from start of list
 */

int pop_listint(listint_t **head)
{
	listint_t *old_h;
	int num;

	if (!head)
		return (0);

	if (*head)
	{
		old_h = *head;
		*head = (*head)->next;
		num = old_h->n;
		free(old_h);
		return (num);
	}
	else
		return (0);
}}
