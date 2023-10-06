#include "main.h"
/**
 * *_calloc - Entry point
 * @nmemb: unsigned param int
 * @size: unsigned param int
 * Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	void *dep;
	int total;

	if (nmemb == 0 || size == 0) {
        return (NULL);
    }
    total = nmemb * size;
    dep = malloc(total);

    if (dep == NULL) {
        return (NULL);
    }
    for (i = 0; i < total; i++)
	{
        *((char *)dep + i) = 0;
    }

    return (dep);
}