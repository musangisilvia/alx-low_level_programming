#include "holberton.h"
/**
 *reverse_array - revereses an array.
 *@a: pointer to array.
 *@n: number of elements of an array.
 *
 *Return: void.
 */
void reverse_array(int *a, int n)
{
	int temp, counter;

	counter = 0;
	while (counter <= n - 1)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
