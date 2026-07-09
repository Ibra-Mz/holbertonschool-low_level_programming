#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes each
 *            and initializes the allocated memory to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL if allocation fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;
	unsigned char *bytes;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	/* Initialize allocated memory to zero, manually */
	bytes = ptr;
	for (i = 0; i < total_size; i++)
		bytes[i] = 0;

	return (ptr);
}
