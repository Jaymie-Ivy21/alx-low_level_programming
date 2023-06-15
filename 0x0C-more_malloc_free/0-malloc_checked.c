#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of the int memory to be allocated
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mmlloc;

	mmlloc = malloc(b);
	if (mmlloc == NULL)
		exit(98);
	return (mmlloc);
}
