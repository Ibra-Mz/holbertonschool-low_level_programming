#include"main.h"
/**
 *swap_int - function that swaps the values of two integers.
 *@a: the first integer to swap
 *@b: the second integer to swap
 *return: void
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
