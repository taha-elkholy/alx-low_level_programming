#include "main.h"
#include "dog.h"

/**
 * init_dog - function create new dog with data
 * @d: the dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
