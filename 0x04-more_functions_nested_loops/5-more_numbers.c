#include "main.h"

/**
 * main - check the code
 * description: the description
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		j = 0;
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(j / 10 + 48);
			}
			_putchar(j % 10 + 48);
		}
		_putchar('\n');
	}
}
