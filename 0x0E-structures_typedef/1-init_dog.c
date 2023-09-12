#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: ponter to struct dog
 * @name: pointer to char
 * @age: age of dog
 * @owner: pointer to char
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL) /* validate if d initialize properly*/
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
