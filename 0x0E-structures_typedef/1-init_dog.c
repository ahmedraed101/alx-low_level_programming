#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - utilize a variable of type struct dog
 *
 * @d: pointer to struct to init
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name =  name;
	d->age = age;
	d->owner = owner;
}
