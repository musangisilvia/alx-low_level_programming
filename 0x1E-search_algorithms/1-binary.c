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
	size_t i, last_idx, idx = 0;
	int m;

	if (array == NULL)
		return (-1);

	last_idx = size - 1;

	while (idx <= last_idx)
	{
		printf("Searching in array: ");

		for (i = idx; i <= last_idx; i++)
		{
			printf("%d", array[i]);
			if (i != last_idx)
				printf(", ");
			else
				printf("\n");
		}
		m = (idx + last_idx) / 2;

		if (array[m] < value)
			idx = m + 1;
		else if (array[m] > value)
			last_idx = m - 1;
		else
			return (m);
	}
	return (-1);
}
