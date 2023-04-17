#ifndef DOG_H
#define DOG_H

/**
 * struct dog - represents the information of the dog
 * @name: the name given to the dog
 * @age: the age of the dog
 * @owner: represents who owns the dog
 *
 */

struct dog

{
	char *name;
	char *owner;
	float age;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
