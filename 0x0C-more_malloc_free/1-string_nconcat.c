#include "main.h"

/**
*string_nconcten - conctenenates two strings
*@s1: first string input
*@s2: second string input
*@n: maximum number of bytes of s2 to conctenenate to s1
*
*Return: pointer to the conctenenated space in memory
*/

char *string_nconcten(char *s1, char *s2, unsigned int n)
{
	char *concten;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concten = malloc(sizeof(char) * (len + 1));

	if (concten == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concten[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concten[len++] = s2[index];

	concten[len] = '\0';

	return (concten);
}
