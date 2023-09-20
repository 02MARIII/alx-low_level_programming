#include "main.h"

/**
 * swap_int - Entry point
 * @a: int param
 * @b: int param
 * description: the description
 * Return: Always 0 (Succes)
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
