#ifndef _DOG_H
#define _DOG_H

/**
* struct dog - dogs and their characteristics
* @name: dog name
* @age: dog age
* @owner: owner name
*/
struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H */

