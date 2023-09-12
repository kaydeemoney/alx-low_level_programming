#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variables of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: the name to initialize
 * @age: age to initialize
 * @owner: owners to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
