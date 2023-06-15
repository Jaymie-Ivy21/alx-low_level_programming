#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *@s: first char value
 *@accept: second chaar value
 *
 * Return: char with result
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s)
	{
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		j = 0;
		s++;
	}
	return ('\0');
}
