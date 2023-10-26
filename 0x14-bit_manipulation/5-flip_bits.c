#include "main.h"
/**
 * flip_bits - Entry point
 * @n: unsigned long param for int
 * @m: unsigned long param for int
 * Return: unsigned int
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m) {
    unsigned long int xor_result;
    unsigned int count = 0;

	xor_result = n ^ m;
    while (xor_result)
	{
        count += xor_result & 1;
        xor_result >>= 1;
    }

    return (count);
}
