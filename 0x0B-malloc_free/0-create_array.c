#include "main.h"

/**
 * create_array - array for prints a string
 * @size: argument for size of the array
 * @c: argument for char
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *my_array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	my_array = malloc(sizeof(char) * size);

	if (my_array == NULL)
		return (NULL);

	i = 0;

	while (i < size)
	{
		my_array[i] = c;
		i++;
	}

	return (my_array);
}
