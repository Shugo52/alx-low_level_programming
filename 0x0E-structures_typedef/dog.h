#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * struct dog - structure for dog
 *
 * @name: string
 * @age: dog age
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
