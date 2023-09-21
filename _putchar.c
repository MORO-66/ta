#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
/*
int _putchar(char c)
{
	return (write(1, &c, 1));
}
*/

int _putchar(char c)
{
	static int i;
	static char buf[1024];
	if (c == -1 || i  >= 1024)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != -1)
	buf[i++] = c;
	return (1);
}

