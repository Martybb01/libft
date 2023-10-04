#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_strlen(const char *s);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
int ft_strncmp(char *s1, char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_atoi(const char *str);
char *ft_strchr(const char *s, int c);

#endif
