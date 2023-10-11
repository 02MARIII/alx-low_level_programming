#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Entry point
 * @name: param of char
 * @f: function pounter
 * Description: the description
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
