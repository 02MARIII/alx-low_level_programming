#include "dog.h"
/**
 * init_dog - Entry point
 * @d: struct dog param
 * @name: param for char
 * @age: param for float
 * @owner: param for char
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
