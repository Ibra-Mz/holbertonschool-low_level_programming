#include <stdio.h>

/**
 * main - prints FizzBuzz from 1 to 100
 *
 * Return: always 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (((i % 3) == 0) && ((i % 5) == 0))
{
printf("%s", "FizzBuzz ");
}
else if ((i % 5) == 0)
{
printf("%s", "Buzz ");
}
else if ((i % 3) == 0)
{
printf("%s", "Fizz ");
}
else
printf("%d ", i);
}
printf("\n");
return (0);
}
