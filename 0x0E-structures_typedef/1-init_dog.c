#include <stdlib.h>
#include <stddef.h>
#include "dog.h"
/**
 * init_dog - a struct
 *
 * @d: pointer to dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		exit(1);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
