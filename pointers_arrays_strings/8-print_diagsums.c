#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix (number of rows/columns)
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i); /* sum of the main diagonal */
		sum2 += *(a + i * size + (size - 1 - i)); /* sum of the 2nddiagonal */
	}

	printf("%d, %d\n", sum1, sum2);
}
