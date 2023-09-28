#include "main.h"
int divise(int n, int div);

/**
 * is_prime_number - Entry point
 * @n: param of int
 * Return: 1 if n is prime or  0 in otherwise
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (divise(n, div));
}

/**
 * divise - Entry point
 * @n: param of int
 * @div: param of div
 * Return: 1 if n is divisible or 0 if n is not
 */
int divise(int n, int div)
{
	if (n % div == 0)
		return (0);

	if (div == n / 2)
		return (1);

	return (divise(n, div + 1));
}
