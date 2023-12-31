#include "hash_tables.h"

/**
 * key_index - Entry point
 * @key: const unsigned param for string
 * @size: unsgined long param for int
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
