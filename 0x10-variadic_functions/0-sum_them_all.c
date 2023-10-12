#include "variadic_functions.h"
/**
 * sum_them_all - Entry point
 * @n: param for unsigned int
 * Return: int
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int s = 0;
	unsigned int i, x;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, unsigned int);
		s += x;
	}
	va_end(args);
	return (s);
}
