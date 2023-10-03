#include "main.h"
/**
 * *_strdup - Entry point
 * @str: param of char
 * Return: char
*/
char *_strdup(char *str)
{
	char *newText;
	int i;
	int x;

	while (str[x] == '\0')
	{
		x++;
	}
	newText = malloc(sizeof(char) * (x + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	if (newText == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		newText[i] = str[i];
	}
	newText[x] = '\0';
	return (newText);
}