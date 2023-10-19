#include "lists.h"
/**
 * *add_node_end - Entry point
 * @head: double pointer for list_t
 * @str: const param for char
 * Return: list_t
*/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int z = 0;
	list_t *newNode = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head)
		return (NULL);
	if (!newNode)
		return (NULL);
	while (str[z] != '\0')
		z++;
	if (str != NULL)
	{
		newNode->str = strdup(str);
		if (newNode->str == NULL)
		{
			free(newNode);
			return (NULL);
		}
		newNode->len = z;
	}
	if (node != NULL)
	{
		while (node->next)
			node = node->next;
		node->next = newNode;
	}
	else
		*head = newNode;
	return (newNode);
}
