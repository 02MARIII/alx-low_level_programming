#include "main.h"
/**
 * get_bit - Entry point
 * @n: unsigned long param for int
 * @index: unsigned param for int
 * Return: int
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	tmp = 1UL << index;
	if ((n & tmp) != 0)
		return (1);
	else
		return (0);
}
