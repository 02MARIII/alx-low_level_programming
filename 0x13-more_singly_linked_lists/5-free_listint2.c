#include "lists.h"
/**
 * free_listint2 - Entry point
 * @head: double pointer param for listint_t
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *ser;

	while (ser != NULL)
	{
		temp = ser;
		ser = ser->next;
		free(temp);
	}
	*head = NULL;
}
