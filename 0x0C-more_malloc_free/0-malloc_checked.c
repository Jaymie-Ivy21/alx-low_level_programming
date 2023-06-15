#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of the int memory to be allocated
 *
 * Return: pointer to the allocated memory
 */
 
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);
	return (block);
}
