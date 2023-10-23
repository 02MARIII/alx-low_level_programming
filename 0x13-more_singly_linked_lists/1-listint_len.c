#include "lists.h"
/**
 * list_len - Entry point
 * @h: const param for list_t
 * Return: size_t
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}