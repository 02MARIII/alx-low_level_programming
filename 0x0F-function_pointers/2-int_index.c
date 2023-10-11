#include "function_pointers.h"
/**
 * int_index - Entry point
 * @array: pointer param of int
 * @size: param of int
 * @cmp: function pointer
 * Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != '\0')
				return (i);
			
		}
	}
	return (-1);
}