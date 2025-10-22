#include <stdio.h>
/**
* main - starting point of the program
*
* Declare the variable i
* loop to display number 0-9 followed by new line
*
* Return: return 0 if succes
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar('0' + i);
}
putchar('\n');
return (0);
}
