#include <stdio.h>
/**
* main - starting point of the program
*
* Declare the variable i and j
* loop to display number of base 16
*
* Return: return 0 if succes
*/
int main(void)
{
int i;
char j;
for (i = 0; i <= 9; i++)
{
putchar ('0' + i);
}
for (j = 'a'; j <= 'f'; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
