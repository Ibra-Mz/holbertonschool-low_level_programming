#include <stdio.h>
/**
* main - starting point of the program
*
* Declare the variable i 
* loop to display possible comb of single digit numbers
*
* Return: return 0 if succes
*/
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar('0' + i);
if (i != 9);
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}