#include "lists.h"

/**
 * insert_dnodeint_at_index - Entry point
 * @h: double pointer param for dlistint_t
 * @idx: unsigned param for int
 * @n: param for int
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current = *h;
    unsigned int i;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;

    while (current != NULL && current->prev != NULL)
    {
        current = current->prev;
        *h = (*h)->prev;
    }

    if (idx == 0)
    {
        free(new_node);
        return (add_dnodeint(h, n));
    }

    for (i = 0; i < idx - 1 && current != NULL; i++)
        current = current->next;

    if (current == NULL)
    {
        free(new_node);
        return (NULL);
    }

    if (current->next == NULL)
    {
        new_node->next = NULL;
        new_node->prev = current;
        current->next = new_node;
    }
    else
    {
        new_node->next = current->next;
        new_node->prev = current;
        current->next->prev = new_node;
        current->next = new_node;
    }

    return (new_node);
}
