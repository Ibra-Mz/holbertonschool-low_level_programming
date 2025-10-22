#include <stdio.h>
/**
* main - starting fun
*
* declare char series
* print alphabet in lowercase
* print one letter per ligne
*
* return: 0 if code is valide
*/
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
