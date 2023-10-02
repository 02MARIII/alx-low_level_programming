#include <stdio.h>
#include <stdlib.h>
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
	if (argc == 3)
	{
		firstNum = atoi(argv[1]);
		secondNum = atoi(argv[2]);
		printf("%d\n", firstNum * secondNum);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
