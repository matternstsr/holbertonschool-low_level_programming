#ifndef DOG_H
#define DOG_H

/**
 * struct dog - New type dog
 * @name: New name of dog
 * @age: New age of dog
 * @owner: New owner of dog
 * dog_t - Typedef for dog structure
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

#endif
