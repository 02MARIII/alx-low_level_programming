#include "main.h"

/**
 * print_alphabet - Entry point
 * description: the description
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
