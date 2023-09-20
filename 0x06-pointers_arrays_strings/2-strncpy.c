#include "main.h"
/**
 * *_strncpy - Entry point
 * @dest: char param
 * @src: char param
 * @n: int param
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\n' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		i++;
		dest[i] = '\0';
	}
	return (dest);
}
