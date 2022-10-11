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
	char *dog_name;
	char *dog_owner;

	if ((n_dog->name == NULL) && (n_dog->owner == NULL))
		return (NULL);

	dog_name = malloc(strlen(name) + 1);
	dog_owner = malloc(strlen(owner) + 1);
	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;
	return (n_dog);
}
