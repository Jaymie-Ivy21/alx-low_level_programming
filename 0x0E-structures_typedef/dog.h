#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure
 * @name: type element
 * @age: type element
 * @owner: type element
 * Desc: Define a new type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * typedef struct dog_t dog - New structure
 * Desc: A new type dog_t as the new name for the type struct dog
 */
typedef struct dog dog_t;
#endif

