#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents information about a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: Defines a type to store information about a dog,
 * its (name, age, owner's name). The members of the structure
 * allow for storing and accessing these attributes
 * of a dog in a structured way.
 */
struct dog_t
{
	char *name;
	float age;
	char *owner;
};

/* Function prototype for init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Function prototypes */
void print_dog(struct dog *d);

#endif /* DOG_H */
