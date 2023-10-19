#include "lists.h"
/**
 * list_len - Entry point
 * @h: const param for list_t
 * Return: size_t
*/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
