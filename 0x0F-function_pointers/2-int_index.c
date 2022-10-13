#include "function_pointers.h"


/**
 * int_index - Search for the index of given number.
 * @array: array of elements
 * @size: number of elements in array
 * @cmp: pointer function to compare elements
 * Return: index of the number that does matches.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}

