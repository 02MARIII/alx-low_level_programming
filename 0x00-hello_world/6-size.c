#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	int a;
	char b;
	float c;
	long int d;
	long long int e;

	printf("Size of an int: %d byte(s)\n", sizeof(a));
	printf("Size of a char: %c byte(s)\n", sizeof(b));
	printf("Size of a float: %f byte(s)\n", sizeof(c));
	printf("Size of a long int: %lf byte(s)\n", sizeof(d));
	printf("Size of a long long int: %llf byte(s)\n", sizeof(e));
}
