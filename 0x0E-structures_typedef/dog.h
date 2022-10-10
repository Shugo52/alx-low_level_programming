#ifndef _DOG_H_
#define _DOG_H_
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
#endif
