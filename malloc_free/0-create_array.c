#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars and initializes it
 *                with a specific char.
 * @size: The size of the array.
 * @c: The character to initialize each element of the array with.
 *
 * Return: A pointer to the array, or NULL if size is 0 or if
 *         memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);  /* Return NULL if size is 0 */
	}

	arr = (char *)malloc(size * sizeof(char));  /* Allocate memory */
	if (arr == NULL)
	{
		return (NULL);  /* Return NULL if memory allocation fails */
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;  /* Initialize each element with char c */
	}

	return (arr);  /* Return pointer to the newly created array */
}
