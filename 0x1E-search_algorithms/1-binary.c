#include "search_algos.h"
/**
  * binary_search - searches for a value in an array of integers using binary
  * search.
  * @array: pointer to first element of array to search
  * @size: number of elements in array
  * @value: value to search for
  * Return: first index where value is located or -1
  */
int binary_search(int *array, size_t size, int value)
{
	size_t idx = 0;
	int m;

	if (array == NULL)
		return (-1);

	while (idx <= size - 1)
	{
		m = (idx + (size - idx)) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] < value)
			idx = m + 1;
		else
			size = m - 1;
		idx++;
	}

	return (-1);
}
