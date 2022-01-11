#include "sort.h"

/**
 * selection_sort - function to sort an array similar to selection sort
 * @array: array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
  unsigned int i, j, min;
  int temp;
  if (size < 2)
    return;
  for (i = 0; i < size; i++)
    {
      min = i;
      for (j = i + 1; j < size; j++)
	{
	  if (array[j] < array[min])
	    min = j;
	}
      tmp = array[i];
      array[i] = array[min];
      array[min] = tmp;
      if (i != min)
	print_array(array, size);
    }
}
