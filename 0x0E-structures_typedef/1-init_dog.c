#include "dog.h"
#include <stdio.h>
/**
 * init_dog - dog class structure
 *
 * @d: address
 * @name: dogs name
 * @age: dogs age
 * @owner: owners name
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
