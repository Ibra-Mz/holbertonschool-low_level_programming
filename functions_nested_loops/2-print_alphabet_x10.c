#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 */
void print_alphabet_x10(void)
{
char j;
char i;
i = '0'; 
while (i <= '9')
{
j = 'a';
while (j <= 'z')
{
_putchar (j);
j++;
}
_putchar ('\n');
i++;
}
}
