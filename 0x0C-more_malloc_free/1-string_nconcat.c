#include "main.h"
/**
 * *string_nconcat - Entry point
 * @s1: pointer param of char
 * @s2: pointer param of char
 * @n: unsigned param of int
 * Return: char
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dep;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int q, w;
	unsigned int leng;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n >= j)
	{
		n = j;
	}
	leng = i + n;
	dep = malloc((leng + 1) * sizeof(char));

	if (dep == NULL)
		return (NULL);
	for (q = 0; q < i; q++)
		dep[q] = s1[q];
	for (w = 0; w < n; w++)
		dep[w + i] = s2[w];
	dep[leng] = '\0';
	return (dep);
}
