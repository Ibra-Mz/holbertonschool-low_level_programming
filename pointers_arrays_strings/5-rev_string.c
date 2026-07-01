#include"main.h"
/**
 * rev_string - function that reverses a string.
 * @s: the string to reverse
 * Return: void
 */
void rev_string(char *s)
{
int i = 0;       /** variable declaration */
int j = 0;
char temp;

while (s[i] != '\0')          /** first loop to get the length of the string */
{
i++;
}

i--;
while (i >= j)                /** loop to reverse the string */
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
i--;
j++;
}
}
