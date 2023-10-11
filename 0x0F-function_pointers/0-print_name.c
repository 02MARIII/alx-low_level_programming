#include "function_pointers.h"
/**
 * print_name - Entry point
 * @name: param for char
 * @f: function pointer
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	/* void (*pointer_f)(char *); */

	if (f || name)
		(*f)(name);
	/* pointer_f = f; */
	/* (*pointer_f)(name);*/
}
