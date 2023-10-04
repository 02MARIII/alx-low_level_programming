#include "main.h"
/**
 * argstostr - Entry point
 * @ac: param of int
 * @av: double pointer param of char
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *buff;
	int i, j;
	int k = 0, g = 0;

	if (av == NULL || ac == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			k++;
		}
	}
	k += ac;
	buff = malloc(sizeof(char) * (k + 1));
	if (buff == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			buff[g] = av[i][j];
			g++;
		}
		buff[g] = '\n';
		g++;
	}
	return (buff);
}
