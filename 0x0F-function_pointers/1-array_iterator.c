#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes the function for
 * each element of array.
 * @array: array to be passed over
 * @size: size of array
 * @action: pointer function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
