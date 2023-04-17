#include <stdio.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function print dog data
 * @d: the dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("nothing\n");
	}
	else
	{
		printf("Name: %s\n", (d.name) ? d.name :  "(nil)");
		printf("Age: %f\n", (d.age) ? d.age :  "(nil)");
		printf("Owner: %s\n", (d.owner) ? d.owner : "(nil)");
	}
}
