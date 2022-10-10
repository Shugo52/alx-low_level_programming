#ifndef _DOG_H_
#define _DOG_H_
/**
 * dog - structure for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
