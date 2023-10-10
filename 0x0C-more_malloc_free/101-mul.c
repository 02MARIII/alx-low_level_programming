#include "main.h"
/**
 * multiply - Entry point
 * @num1: llf param
 * @num2: llf param
 * Return: llf
*/
unsigned long long multiply(unsigned long long num1, unsigned long long num2)
{
	return (num1 * num2);
}
/**
 * isDigitsOnly - Entry point
 * @str: char param
 * Return: int
*/
int isDigitsOnly(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * main - Entry point
 * @argc: index of params in argv
 * @argv: list of params
 * Return: int
*/
int main(int argc, char *argv[])
{
	char *num1_str;
	char *num2_str;
	unsigned long long num1;
	unsigned long long num2;
	unsigned long long result;

	if (argc != 3)
	{
		_putchar("Error\n");
		return (98);
	}

	num1_str = argv[1];
	num2_str = argv[2];

	if (!isDigitsOnly(num1_str) || !isDigitsOnly(num2_str))
	{
		_putchar("Error\n");
		return (98);
	}

	num1 = strtoull(num1_str, NULL, 10);
	num2 = strtoull(num2_str, NULL, 10);
	result = multiply(num1, num2);
	_putchar(result);
	return (0);
}
