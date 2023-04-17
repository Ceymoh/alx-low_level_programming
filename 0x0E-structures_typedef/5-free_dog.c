#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free up memory allocated
 * @d: dog representation
 *
 */

void free_dog(dog_t *d)

{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
