#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 *
 * Return: pointer to the changed string
 */
char *cap_string(char *s)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z') /** handle first character*/
		s[0] -= 32;

	for (i = 0; s[i] != '\0'; i++)  /** Second character */
	{
		for (j = 0; sep[j] != '\0'; j++) /** check if separator */
		{
			if (s[i - 1] == sep[j])
			{
				if (s[i] > 'a' && s[i] < 'z')
				s[i] -= 32; /** Eq to s[i] = s[i] -32; */
			}
		}
	}
	return (s);
}
