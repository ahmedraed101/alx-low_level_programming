#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <stdio.h>

int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);
#endif