#ifndef _DOG_H
#define _DOG_H

/**
* struct dog - dogs and their characteristics
* @name: dog name
* @age: dog age
* @owner: owner name
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* _DOG_H */

