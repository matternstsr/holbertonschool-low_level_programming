#ifndef DOG_H
#define DOG_H
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - New type dog
 * @name: New name of dog
 * @age: New age of dog
 * @owner: New owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
