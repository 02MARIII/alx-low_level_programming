#include "main.h"
/**
 * main - Entry point
 * @argc: index of argv
 * @argv: list of strings in argc
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int firstNum;
	int secondNum;
	int results;

	if (argc == 3)
	{
		firstNum = atoi(argv[1]);
		secondNum = atoi(argv[2]);
		results = firstNum * secondNum;
		printf("%d\n", results);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
