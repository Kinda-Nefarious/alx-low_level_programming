#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Description: Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: return 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
