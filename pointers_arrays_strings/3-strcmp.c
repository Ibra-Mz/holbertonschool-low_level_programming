#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: less than 0 if s1 < s2, 0 if s1 == s2, greater than 0 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)  /** loop check equality */
	{
		s1++;              /** increment pointer s1 */
		s2++;              /** increment pointer s2 */
	}
	return (*s1 - *s2);    /** return the difference between the two characters */
}
