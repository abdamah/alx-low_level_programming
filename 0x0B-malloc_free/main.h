#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

void free_grid(int **grid, int height);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
char *argstostr(int ac, char **av);
int length(char *str);
char **strtow(char *str);
int count_words(char *s);
int **alloc_grid(int width, int height);
#endif /* MAIN_H */
