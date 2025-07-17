#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
size_t  ft_strlen(const char *s);
int strncmp(const char *s1, const char *s2, size_t n);
int ft_atoi(const char *str);

#endif