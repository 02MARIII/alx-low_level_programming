#include <stdio.h>
/**
 * main - Entry point
 *
 * description: printing all alphabet character
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char first = 'a';

	for (first = 'a'; first <= 'z'; first++)
	{
		putchar(first);
	}
	putchar("\n");
	return (0);
}
