#include <stdio.h>

/**
 * main - Prints the alphabet in lowencase and skip q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;
i = 'a';
while (i <= 'z')
{
if (i != 'e' && i != 'q')
{
putchar (i);
}
i++;
}
putchar ('\n');
return (0);
}
