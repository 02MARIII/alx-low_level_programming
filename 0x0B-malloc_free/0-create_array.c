#include "main.h"
/**
 * create_array - Entry point
 * @size: param of int
 * @c: param of char
 * Return: char
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *table = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (table == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		table[i] = c;
	}
	return (table);
}