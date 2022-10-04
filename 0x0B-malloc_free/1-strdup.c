#include "main.h"

/**
 * _strdup - array for prints a string
 * @str: argument for array
 * Return: 0
 */

char *_strdup(char *str)
{
	char *strDup;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	i++;
	strDup = malloc(sizeof(*str) * i);

	if (strDup == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		strDup[j] = str[j];
		j++;
	}

	return (strDup);
}
