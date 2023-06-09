#include "main.h"

/**
 * factorial -  returns the factorial of a given number
 * @n: number
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
