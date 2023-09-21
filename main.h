

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

#include <sys/stat.h>
#include <sys/types.h>
#include <signal.h>
#include <limits.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>

#define ERR 666
#define norm -1

#define ALL \
{ NULL, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, \
NULL, 0, 0, NULL, 0, 0, 0}

/**
 * struct list - singly linked list
 * @num: num
 * @str: string
 * @next: next pointer
 */
typedef struct list
{
	int num;
	char* str;
	struct list* next;
} list_t;
typedef struct all
{

	char* arg;
	char** argv;
	char* path;
	int argc;
	unsigned int line_count;
	int err_num;
	int linecount_flag;
	char* fname;
	list_t* env;
	list_t* history;
	list_t* alias;
	int env_changed;
	int status;
	char** cmd_buf;
	int cmd_buf_type;
	int readfd;
	int histcount;
} info_t;

int _putchar(char c);
/* print all */
int putchar_all(char c, int fd);
int putsall(char* str, int fd);

#endif

