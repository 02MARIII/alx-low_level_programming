#include "main.h"
int _sqrt(int start, int n);
/**
 * _sqrt_recursion - Entry point
 * @n: param of int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
 * _sqrt - Entry point
 * @n: param of n
 * @prev: param of prev
 * Return: int
 */

int _sqrt(int start, int n)
{
	if (start > n)
		return (-1);
	else if (start * start == n)
		return (start);
	else
		return (_sqrt(start + 1, n));
}
