#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* print_dog - this prints the properties of a dog
* @d: struct variable name
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else if (d->age < 0)
		{
			printf("Age: (nil)\n");
		}
		else if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		printf("Owner: %s\n", d->owner);
		printf("Age: %f\n", d->age);
		printf("Name: %s\n", d->name);
	}
	return;
}
