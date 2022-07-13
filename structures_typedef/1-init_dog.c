#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize a variable of type struct dog.
 *
 * @d: Struct
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Owner of dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
