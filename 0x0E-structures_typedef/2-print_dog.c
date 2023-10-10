#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog info
 * @d: pointer to the dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
	{
		printf("Name: %s\nAge: %s\nOwner: %s\n", "(nil)", "(nil)", "(nil)");
	}
	else
	{
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
	}

}
