#include "lists.h"
/**
* add_node - Entry point
* @head: double pointer param for list_t
* @str: param for char *
* Return: list_t
**/
list_t *add_node(list_t **head, const char *str)
{
	char *new_str = NULL;
	list_t *ret_list;
	unsigned int i;

	new_str = strdup(str);
	ret_list = malloc(sizeof(list_t));
	if (ret_list == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	ret_list->str = new_str;
	ret_list->next = *head;
	ret_list->len = i;
	*head = ret_list;
	return (*head);
}
