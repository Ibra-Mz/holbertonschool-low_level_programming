#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n) /** function to reverse array */
{
	int i;                        /* loop counter */
	int temp;                     /* temp var to hold value during swap */

	for (i = 0; i < n / 2; i++)   /* loop through half of the array */
	{
		temp = a[i];              /* store current element in temp */
		a[i] = a[n - 1 - i];      /* swap elements */
		a[n - 1 - i] = temp;      /* store swapped element in temp */
	}
}
