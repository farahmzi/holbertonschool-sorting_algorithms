#include "sort.h"
/**
*bubble_sort-Sorts an array of integers in ascending order
*using the Bubble sort algorithm
*@array:Array to be sorted
*@size:Size of the array
*/
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int temp;
if (array == NULL || size < 2)
return;
for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - 1 - i; j++)
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
