#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -initializes a variable
 * @d: initializes dog
 * @name: represents the name of the dog
 * @age: represents the age of the dog
 * @owner: represent who owns the dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

}
