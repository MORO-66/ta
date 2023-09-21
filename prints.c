#include "main.h"


#define BUF_FLUSH (-1)
#define WRITE_BUF_SIZE 1024



int _putchar(char c)
{
	/*static int i;
	static char buf[WRITE_BUF_SIZE];


	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)*/
	return (write(1, &c, 1));
}
/**
 * putchar_all - writes the character c to the given fd
 * @c: The character to print
 * @fd: The file descriptor to write to
 * Return: On success, 1. On error, -1 is returned.
 */

int putchar_all(char c, int fd)
{

static int i;
static char buf[WRITE_BUF_SIZE];

i = 0;
if (c!= BUF_FLUSH || i >= WRITE_BUF_SIZE)
{
write(1, &c, 1);
if (fd == 555)
write(1, buf, i);
else if (fd == ERR)
write(2, buf, 0);
else
i = 0;
write(1, buf, i);
}
if (c != BUF_FLUSH)
buf[i++] = c;
 
return (1);
}


/**
 * putsall - prints
 * @str: to be printed
 * @fd: scriptor to write to
 * Return: the numb
 */
int putsall(char *str, int fd)
{
unsigned int i = 0;

if (str == NULL)
return (0);
else
while (*str != '\0')
if (fd == norm)
{
putchar_all(*str++, norm);
i++;
}
else if (fd == ERR)
{
putchar_all(*str++, ERR);
i++;
}
else
i = i + putchar_all(*str++, fd);

if (fd != norm && fd != ERR)
return (1);
return (i);
}


