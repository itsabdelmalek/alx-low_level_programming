#ifndef MAIN_H
#define MAIN_H
#define NULL ((void *)0)

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);

#endif /* MAIN_H */

