#include "main.h"
/**
 * *str_concat - Entry point
 * @s1: param of char
 * @s2: param of char
 * Return: char
*/
char *str_concat(char *s1, char *s2)
{
	int x = 0, i = 0, j, k;
	char *buff;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
		x++;
	while (s2[i] != '\0')
		i++;
	buff = malloc(sizeof(char) * (x + i + 1));
	if (buff == NULL)
		return (NULL);
	for (j = 0; j < x; j++)
	{
		buff[j] = s1[j];
	}
	for (k = 0; k < i; k++)
	{
		buff[x + k] = s2[k];
	}
	buff[x + i] = '\0';
	return (buff);
}
