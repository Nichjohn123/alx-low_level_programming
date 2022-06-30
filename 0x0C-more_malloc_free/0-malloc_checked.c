#include "main.h"
#include <stdlib>
/**
 * malloc_checked - array for prints a string
 * @b: number of memory
 *
 * Return: void
 * if malloc fails, status value is equall to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
