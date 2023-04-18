#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Initialize a variable of type struct dog
 * @d: type element
 * @name: type element
 * @age: type element
 * @owner: type element
 * Return: output
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

