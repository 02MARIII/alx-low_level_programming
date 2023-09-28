#include "main.h"
/**
 * _pow_recursion - Entry point
 * @x: param of int
 * @y: param if int
 * return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
