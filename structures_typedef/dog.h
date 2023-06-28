#ifndef DOG_H
#define DOG_H

/**
 * struct dog - New type dog
 * @name: New name of dog
 * @age: New age of dog
 * @owner: New owner of dog
 * @dog_t: New type of name for dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
	char *dog_t;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
