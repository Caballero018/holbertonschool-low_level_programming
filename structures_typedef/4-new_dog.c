#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Function that stores a copy of the name and owner.
 *
 * @name: Copy of name of dog.
 * @age: Age of dog.
 * @owner: Copy of name of owner of dog.
 * Return: d
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlon = 0, olon = 0, i; /*n'lon'(diminutive of longitude) */
	dog_t *d;			/* and o'lon'(diminutive of longitude) */

	d = (dog_t *)malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	while (name[nlon])
		nlon++;
	while (owner[olon])
		olon++;

	d->name = malloc(nlon * sizeof(d->name)); /* Sufficient copy space */
	if (d->name == NULL)				/* is reserved dynamically */
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i < nlon; i++) /* The copy of d->name was created */
		d->name[i] = name[i];

	d->age = age;

	d->owner = malloc(olon * sizeof(d->owner)); /* Sufficient copy space */
	if (d->owner == NULL)				/* is reserved dynamically */
	{
		free(d->owner);
		free(d);

		return (NULL);
	}
	for (i = 0; i < olon; i++) /* The copy of d->owner was created */
		d->owner[i] = owner[i];

	return (d);
}
