#include "main.h"

/**
*main - entry point
* @ac: arg c
* @av: arg v
*
* Return: 0 s, 1 error
*/
/*set fd as 3 all p*/

int main(int ac, char **av)
{
info_t info[] = { ALL };
int fd = 2;
list_t *node;
size_t i;
_putchar('$');
putchar_all('\n', norm);
/*
asm("mov %1, %0\n\t"
	"add $3, %0"
	: "=r" (fd)
	: "r" (fd));
	*/
if (ac == 2)
{
fd = open(av[1], O_RDONLY);/* sh ls */
if (fd == -1)
{/*
if (errno == EACCES)
exit(126);*/
if (errno == ENOENT)/*no such file or dir*/
{
putsall(av[0], ERR);
putsall(": 0: Can't open ", ERR);
putsall(av[1], ERR);
putchar_all('\n', ERR);
putchar_all(-1, ERR);
exit(127);
}
return (1);
}
}
node = NULL;
info->readfd = fd;/* open then stdin so == 0*/
for (i = 0; environ[i]; i++)
/*add_node_end(&node, environ[i], 0);*/
info->env = node;
/*set all variable base list_t *env  */
/*r_history(info); */
/*read all history and put them in histcount and history*/
/*headsh(info, av);*/
return (0);
}
