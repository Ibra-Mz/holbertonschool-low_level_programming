#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *ptr;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);
	if (n < len2)
		len2 = n;

	ptr = malloc(len1 + len2 + 1);
	if (ptr == NULL)
		return (NULL);

	ptr[0] = '\0';               /* <-- ensures ptr is a valid string for strcat */
	if (s1 != NULL)
		strcpy(ptr, s1);
	if (s2 != NULL)
		strncat(ptr, s2, len2);

	return (ptr);
}