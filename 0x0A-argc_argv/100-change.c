#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: index of argv
 * @argv: list of strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j = 0;

	if (argc == 2)
	{
		i = atoi(argv[1]);
		if (i >= 25)
		{
			j += i / 25;
			i = i % 25;
		}
		if (i >= 10)
		{
			j += i / 10;
			i = i % 10;
		}
		if (i >= 5)
		{
			j += i / 5;
			i = i % 5;
		}
		if (i >= 2)
		{
			j += i / 2;
			i = i % 2;
		}
		if (i >= 1)
			j++;

		printf("%d\n", j);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
