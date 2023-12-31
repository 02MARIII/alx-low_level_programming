#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct for dog
 * @name: pointer param for char
 * @age: param for float
 * @owner: pointer param for char
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
