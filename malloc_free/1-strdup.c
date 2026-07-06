#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *duplicate;
	int length = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		duplicate[i] = str[i];

	duplicate[length] = '\0';

	return (duplicate);
}
