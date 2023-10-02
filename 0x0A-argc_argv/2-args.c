#include <stdio.h>
/**
 * main - Entry point
 * @argc: index of argv
 * @argv: list of strings in argc
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
