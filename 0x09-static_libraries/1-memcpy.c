#include "main.h"
/**
 * _memcpy - function that copies memory area
 *@dest: the address of memory area copied to
 *@src: the address of memory area copied from
 *@n: byte value
 *
 * Return: char with result of memset
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
