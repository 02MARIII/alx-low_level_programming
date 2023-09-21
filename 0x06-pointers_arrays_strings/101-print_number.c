#include "main.h"
/**
 * print_number - Entry point
 * @n: int param
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;

	num = n;
	if (n < 0)
	{
		putchar('-');
		num = -n;
	}
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	putchar(num % 10 + 48);
}
