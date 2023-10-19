#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t i = 0;
	int z = 0;

	for (z = 0; h->str[z] != '\0'; z++)
		;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", z, h->str);
		h = h->next;
		i++;
	}
	return (i);
}