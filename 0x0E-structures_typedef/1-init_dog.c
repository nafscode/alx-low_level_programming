#include <stdio.h>
#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type struct dog
 * @d: pointer to the dog variable
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
