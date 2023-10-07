#include "main.h"
/**
 * *array_range - Entry point
 * @min: min param of int
 * @max: max param of int
 * Return: int
*/
int *array_range(int min, int max)
{
	int num;
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	num = max - min + 1;
	arr = (int *)malloc(num * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < num; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
