#include "lists.h"
/**
 * listint_len - Entry point
 * @h: const param for listint_t
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
