#include <stdio.h>
#include "sort.h"

/**
 * swap - swap two element
 *
 * @i: Integer number
 * @j: Integer number
 */
void swap(int *i, int *j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}
