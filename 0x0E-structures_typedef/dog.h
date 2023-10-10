#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct for dog
 * @name: pointer param for char
 * @age: param for float
 * @owner: pointer param for char
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif