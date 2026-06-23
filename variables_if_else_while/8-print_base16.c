#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;
char j;
i = 0;
j = 'a';
while (i <= 9)
{
putchar (i + '0');
i++;
}
while (j <= 'f')
{
putchar (j);
j++;
}
putchar ('\n');
return (0);
}
