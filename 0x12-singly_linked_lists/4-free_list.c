#include "lists.h"

/**
* free_list - Entry point
* @head: pointer param for list_t
* Return: void
*/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}