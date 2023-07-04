#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
void *malloc_checked(unsigned int b);
int _strlen(char *s);
int is_digit(char *s);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
void errors(void);

#endif