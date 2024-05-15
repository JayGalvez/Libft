#ifndef LIBFT_H
    #define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

// PARTE 1

int     ft_isalpha(int v);
int       ft_isdigit(int v);
int     ft_isalnum(int v);
int     ft_isascii(int v);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    ft_memset(void *b, int c, size_t len);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlen(const char *s);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
char    *ft_strrchr(const char *s, int c);
char    *ft_strnchr(const char *s, int c, size_t n);
int ft_atoi(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
char *ft_strnchr (const char *s, int c, size_t n);
void *ft_malloc(size_t size);
void    *ft_calloc(size_t count, size_t size);
char    *ft_strdup(const char *s);

//Parte 2

char    *ft_substr(char const *s, unsigned int start, size_t len);
#endif