#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: The elmements in the array to be sorted
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
unsigned int i, j;
int temp;

if (size < 2)
return;

for (i = 0; i < size; i++)
{
for (j = 0; j < size  - i - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);
}
}
}
}
