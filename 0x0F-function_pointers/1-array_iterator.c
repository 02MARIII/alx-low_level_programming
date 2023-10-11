#include "function_pointers.h"
/**
 * array_iterator - Entry point
 * @array: pointer of param int
 * @size: param of size_t
 * @action: function pointer
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}