#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * new_dog - new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: always
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;
	if ((n_dog->name == NULL) && (n_dog->owner == NULL))
		return (NULL); return (n_dog);
}
