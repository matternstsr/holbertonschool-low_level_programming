#ifndef DOG_H
#define DOG_H

/**
 * struct dog - New type dog
 * @name: New name of dog
 * @age: New age of dog
 * @owner: New owner of dog
 * dog_t - Typedef for dog structure
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
#endif
