#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *_strdup(const char *src);

/**
 * new_dog - Entry point
 * @name: param of char
 * @age: param of float
 * @owner: param of char
 * Return: dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->name = _strdup(name);
	newDog->owner = _strdup(owner);
	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}
	newDog->age = age;

	return (newDog);
}
/**
 * *_strdup - Entry point
 * @src: const param for char
 * Description: the description
 * Return: char
*/
char *_strdup(const char *src)
{
	size_t len;
	char *dest;

	if (src == NULL)
	{
		return (NULL);
	}
	len = strlen(src);
	dest = malloc(len + 1);
	if (dest != NULL)
	{
		strcpy(dest, src);
	}
	return (dest);
}
