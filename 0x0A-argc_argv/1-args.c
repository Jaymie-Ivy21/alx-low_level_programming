#include "main.h"
#include <stdio.h>
/**
 * main - prints a number, followed by a new line
 * @argv: argument vector, array of strings
 * @argc: argument count
 * Return: 0
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
