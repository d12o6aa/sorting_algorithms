#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include "swap.c"

/**
 * selection_sort- sorts an array of integers using the Selection sort
 *
 * @array: Array
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}

		if (min != i)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
