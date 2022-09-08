#include <unistd.h>

/**
 * main - main function
 *
 * Write to stdout
 * Return: return 1
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
