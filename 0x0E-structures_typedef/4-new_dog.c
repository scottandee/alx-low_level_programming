#include <stdlib.h>
#include "dog.h"

/**
* *new_dog - this creates a new dog
* @name: name of new dog
* @age: age of new dog
* @owner: owner of new dog
* Return: NULL if failure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
