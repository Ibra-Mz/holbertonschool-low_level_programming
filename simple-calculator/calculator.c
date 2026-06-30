#include<stdio.h>
/**
 * main - simple calculator
 * Return: 0
 */

int main(void)
{
int choice = 1;
/**
int A = 0;
int B = 0;
int result = 0;
*/
printf("simple calculator\n");
while (choice != 0)
{
printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
printf("choice: \n");
scanf("%d", &choice);
if (choice == 0)
{
printf("Bye!\n");
}
if (choice < 0 || choice > 4)
{
printf("Invalid choice\n");
}
}
return (0);
}
