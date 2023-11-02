#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: pointer to allocated memory
 * Return: pointer to allocated memory
 *
 */
void *malloc_checked(unsigned int b)
{
	void *b_ptr = malloc(b);

	if (!b_ptr)
	{
		exit(98);
	}
	return (b_ptr);
}
