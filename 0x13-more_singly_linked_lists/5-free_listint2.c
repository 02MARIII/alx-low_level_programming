#include "lists.h"
/**
 * free_listint2 - Entry point
 * @head: double pointer param for listint_t
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	free(*head);
	*head = NULL;
}
