#ifndef FT_H
# define FT_H

# include <stdlib.h>

typedef unsigned long size_t ;
// ctype.h
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c); 
int ft_tolower(int c);
int ft_toupper(int c);
// string.h
size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
void *ft_memcpy(void *dest, const void *src, size_t n);
char *ft_strchr(char *string, int character);
char *ft_strrchr(char* str, int c);
int ft_strncmp(const char *str1, const char *str2, size_t n);
int ft_memcmp(const void* ptr1, const void* ptr2, size_t num);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memmove(void* dest, const void* src, size_t n);
int ft_atoi(const char *nptr);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nmemb, size_t size);
char *ft_strdup(const char *s);
size_t ft_strlcat(char *dst, const char *src, size_t size);
char *ft_strnstr(const char *big, const char *little, size_t len);
 void *ft_memset(void *s, int c, size_t n);
#endif