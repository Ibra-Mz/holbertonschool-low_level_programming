#include <stdio.h>
/**
 * main - starting point of the program
 *
 * Description: Prints the alphabet in lowercase and upper
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i != 'q' && i != 'e')
{
putchar(i);
}
}
putchar('\n');
return (0);
}
