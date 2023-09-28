#include "main.h"
/**
 * factorial - Entry point
 * @n: param of int
 * Return: -1 if n lower then 0 otherwise int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
