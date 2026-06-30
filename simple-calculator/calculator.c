#include<stdio.h>
/**
 * main - simple calculator
 * Return: 0
 */

int main(void)
{
int choice = 1;
float A = 0;
float B = 0;
float result = 0;
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
if (choice == 1)
{
printf("A: ");
scanf("%f", &A);
printf("B: ");
scanf("%f", &B);
result = (A + B);
printf("Result: %f\n", result);
}
if (choice == 2)
{
printf("A: ");
scanf("%f", &A);
printf("B: ");
scanf("%f", &B);
result = (A - B);
printf("Result: %f\n", result);
}
if (choice == 3)
{
printf("A: ");
scanf("%f", &A);
printf("B: ");
scanf("%f", &B);
result = (A * B);
printf("Result: %f\n", result);
}
if (choice == 4)
{
printf("A: ");
scanf("%f", &A);
printf("B: ");
scanf("%f", &B);
if (B == 0)
{
printf("Error: division by zero\n");
}
else
{
result = (A / B);
printf("Result: %g\n", result);
}
}
}
return (0);
}
