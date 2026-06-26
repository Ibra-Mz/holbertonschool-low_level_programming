#include "main.h"

/**
 * _isupper - function that checks if a character is uppercase
 * @c: the character to check
 *
 * Return: 1 if the character is uppercase, 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
