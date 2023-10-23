#include "lists.h"
/**
 * free_listint2 - Entry point
 * @head: double pointer param for listint_t
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
	}
	*head = NULL;
}
