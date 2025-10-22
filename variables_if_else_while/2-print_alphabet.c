#include <stdio.h>
/**
* main - starting fun
*
* declare char series
* print alphabet in lowercase
* one letter per ligne
*
* return 0 : succes
*/
int main(void)
{
char i;
for (i = 'a'; i<= 'z'; i++ )    
{
putchar(i);    
}
putchar('\n');
return (0);
}