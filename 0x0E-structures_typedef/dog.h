#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure dog
 * @name: atribute pointer to char name's dog
 * @age: atribute float age's dog
 * @owner: atribute pointer to char owner's dog
 *
 *Description: a dog,name, its owner and its age
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
