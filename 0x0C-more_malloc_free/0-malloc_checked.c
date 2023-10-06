#include "main.h"
/**
 * malloc_checked - Entry point
 * @b: unsigned param int
 * Return: void
*/
void *malloc_checked(unsigned int b)
{
	void *dess = malloc(b);

	if (dess == NULL)
		exit(98);
	return (dess);
}
