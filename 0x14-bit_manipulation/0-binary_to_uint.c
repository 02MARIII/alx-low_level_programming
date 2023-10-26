#include "main.h"
/**
 * binary_to_uint - Entry point
 * @b: pointer const param for char
 * Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		val <<= 1;
		val += b[i] - '0';
		i++;
	}

	return (val);
}
