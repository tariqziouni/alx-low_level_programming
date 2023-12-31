#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);

char *create_array(unsigned int size, char c);

char *_strdup(char *str);

int _strlen(char *s);

char *str_concat(char *s1, char *s2);

char *_strncat(char *dest, char *src, int n);

int **alloc_grid(int width, int height);

void free_grid(int **grid, int height);

char *argstostr(int ac, char **av);

#endif /* MAIN_H */
