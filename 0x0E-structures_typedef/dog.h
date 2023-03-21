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

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
