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
	unsigned int i;
	char *ptr;

	if (s1 != NULL)
		while (s1[len1] != '\0')
			len1++;
	if (s2 != NULL)
		while (s2[len2] != '\0')
			len2++;
	if (n < len2)
		len2 = n;

	ptr = malloc(len1 + len2 + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < len2; i++)
		ptr[len1 + i] = s2[i];
	ptr[len1 + len2] = '\0';

	return (ptr);
}
