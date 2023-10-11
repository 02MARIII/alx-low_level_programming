#include "3-calc.h"
/**
 * op_add - Entry point
 * @a: param of int
 * @b: param of int
 * Return: int
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Entry point
 * @a: param of int
 * @b: param of int
 * Return: int
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Entry point
 * @a: param of int
 * @b: param of int
 * Return: int
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Entry point
 * @a: param of int
 * @b: param of int
 * Return: int
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Entry point
 * @a: param of int
 * @b: param of int
 * Return: int
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
