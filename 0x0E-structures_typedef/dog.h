#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct that stores some information of a dog
 * @name: string for dog name
 * @age: float on the age 
 * @owner: string of the owner
 *
 * Description: creates profile with name, age, owner elements
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
