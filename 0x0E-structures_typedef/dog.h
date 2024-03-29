#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the dog's info
 * @name: first info
 * @age: second info
 * @owner: third info
 *
 * Description: it combines 3 infos about dog
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
void free_dog(dog_t *d);

#endif
