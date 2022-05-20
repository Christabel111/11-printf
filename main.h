#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
void(*get_functions(char *format, int i))(va_list, char*, char*, char*, int*);
void _printf_c(va_list arg, char *buffer, char *strtmp, char *tmp, int *indj);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void _printf_s(va_list arg, char *buffer, char *strtmp, char *tmp, int *indj);
void _printf_p(va_list arg, char *buffer, char *strtmp, char *tmp, int *indj);
void _printf_d(va_list arg, char *buffer, char *tmp, char *strtmp, int *indj);
void _printf_i(va_list arg, char *buffer, char *tmp, char *strtmp, int *indj);
char *_itoa(int i, char *strout, int base);
int print_rev(va_list r;

/**
 * struct clasification - struct with elements of type
 * pointer and function pointer.
 * @op: Pointer to char next to where % was found.
 * @funct: Pointer to function that will be passed
 * to perform printing.
 */

typedef struct clasification
{
	char *op;
	void (*funct)(va_list, char *, char *, char *, int *);
} clf;

#endif /* MAIN_H*/
