#include "main.h"
/**
 * _puts - Entry point
 * @str: string param
 * description: the desciption
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		*str++;
	}
	_putchar('\n');
}
