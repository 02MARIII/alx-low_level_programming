#include <stdio.h>
int main(void)
{
	int num = -2;

	if (num < 0)
		num = -num;
	printf("%d\n", num);
	return (0);
}