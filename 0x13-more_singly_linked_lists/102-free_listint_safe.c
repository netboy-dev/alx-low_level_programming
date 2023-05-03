#include <stddef.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely
 * @h: A pointer to a pointer to the first node of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    size_t size = 0;
    listint_t *tmp = NULL;

    if (h == NULL || *h == NULL)
        return (0);

    while (*h != NULL)
    {
        size++;
        if (*h <= (*h)->next)
        {
            /* Loop detected, set current node to NULL */
            *h = NULL;
            break;
        }
        tmp = (*h)->next;
        free(*h);
        *h = tmp;
    }

    *h = NULL;
    return (size);
}
