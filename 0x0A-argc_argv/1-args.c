#include <stdio.h>
/**
 * main - Entry point
 * @argc: index of argv
 * @argv: list of strings in argc
 * Return: 0 Always
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
