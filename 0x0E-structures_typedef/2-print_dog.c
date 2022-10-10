#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * print_dog - prints about dog
 *
 * @d: structure
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->name)
		printf("Name: %s\n", d->name);
	if (!(d->age))
		printf("Age: (nil)\n");
	if (d->age)
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	if (d->owner)
		printf("Owner: %s\n", d->owner);
}
