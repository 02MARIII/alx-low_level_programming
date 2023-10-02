#include <ctype.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: index of argv
 * @argv: list of strings in argc
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int total = 0;
	int error_flag = 0;
	int i;
	int j;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					error_flag = 1;
					break;
				}
			}
			if (!error_flag)
			{
				int num = atoi(argv[i]);

				if (num <= 0)
				{
					printf("Error\n");
					error_flag = 1;
					break;
				}
				total += num;
			}
		}
	}

	if (error_flag)
	{
		return (1);
	}
	else
	{
		printf("%d\n", total);
		return (0);
	}
}
