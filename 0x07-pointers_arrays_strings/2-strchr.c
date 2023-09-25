#include "main.h"
/**
 * _strchr - Entry point
 * @s: pointer of c
 * @c: param of char
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
	if (*s == c)
	{
		return (s);
	}
	s++;
	}
	return (s);
}
