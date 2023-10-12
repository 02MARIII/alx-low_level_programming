#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Entry point
 * @format: const pointer param for const char
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = "";
	char *str;

	va_list args;

	va_start(args, format);

	if (format != NULL)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char*);
					printf("%s", separator);
					if (str == NULL)
						str = "(nil)";
					printf("%s", str);
					break;
				default:
					i++;
					continue;
			}
				separator = ", ";
				i++;
		}
				
	}
	printf("\n");
	va_end(args);
}
