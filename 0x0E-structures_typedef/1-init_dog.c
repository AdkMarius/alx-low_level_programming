#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize the variable of struct dog
 * @d: a pointer on struct dog
 * @name: string
 * @age: float
 * @owner: string
 *
 * Return: Noting
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
