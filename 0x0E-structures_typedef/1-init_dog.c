#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a dog
 * @d: pointer to memory of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		d = malloc(sizeof(struct dog));
		
	d->name = name;
	d->owner = owner;
	d->age = age;
}
