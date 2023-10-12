#include "variadic_functions.h"
/**
 * print_strings - Entry point
 * @separator: const param for char
 * @n: const unsigned param for int
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char *);
		if (x)
			printf("%s", x);
		else
			printf("(nil)");
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
