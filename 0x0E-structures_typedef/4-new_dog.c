#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
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

	if (!(name) || !(owner))
		return (NULL);

	dog_name = malloc(strlen(name) + 1);
	dog_owner = malloc(strlen(owner) + 1);
	n_dog = malloc(sizeof(dog_t));
	if (!(n_dog) || !(dog_name) || !(dog_owner))
	{
		free(dog_name);
		free(dog_owner);
		free(n_dog);
		return (NULL);
	}

	strcpy(dog_name, name);
	strcpy(dog_owner, owner);

	n_dog->name = dog_name;
	n_dog->age = age;
	n_dog->owner = dog_owner;
	return (n_dog);
}
