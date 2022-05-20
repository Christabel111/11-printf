#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _printf_c - print characters
 * @arg: Variadic arguements
 * @buffer: Array in which what is to be printed is allocated
 * @tmp: Array to hold values temporarily
 * @strtmp: Pointer to hold values temporarily
 * @indj: Index that holds the position on buffer
 */

void _printf_c(va_list arg, char *buffer, char *strtmp, char *tmp,
		  int *indj)
{
	arg = arg;
	strtmp = strtmp;
	tmp = tmp;

	buffer[*indj] = (char)va_arg(arg, int);
}

/**
 * _printf_s - Function pointed to to assist in print a string
 * Return: Void.
 * @arg: Variadic arguements
 * @buffer: Array in which what is to be printed is allocated
 * @tmp: Array to hold values temporarily
 * @strtmp: Pointer to hold values temporarily
 * @indj: Index that holds the position on buffer
 */

void _printf_s(va_list arg, char *buffer, char *strtmp, char *tmp, int *indj)
{
	tmp = tmp;

	strtmp = va_arg(arg, char *);
	if (strtmp == (char *)0)
	{
		strtmp = "(null)";
	}
	if (*strtmp == '\0')
	{
		(*indj)--;
	}
	else
	{
		_strcpy(&buffer[*indj], strtmp);
		*indj = *indj + _strlen(strtmp);
	}
}

/**
 * _printf_p - Function pointed to to assist in print a %
 * Return: Void.
 * @arg: Variadic arguements
 * @buffer: Array in which what is to be printed is allocated
 * @tmp: Array to hold values temporarily
 * @strtmp: Pointer to hold values temporarily
 * @indj: Index that holds the position on buffer
 */

void _printf_p(va_list arg, char *buffer, char *strtmp, char *tmp,
int *indj)
{
	arg = arg;
	tmp = tmp;

	strtmp = "%";
	_strcpy(&buffer[*indj], strtmp);
	*indj = *indj + _strlen(strtmp);
}

/**
 * _printf_d - Function pointed to to assist in print a decimal.
 * Return: Void.
 * @arg: Variadic arguements.
 * @buffer: Array in which what is to be printed is allocated.
 * @tmp: Array to hold values temporarily.
 * @strtmp: Pointer to hold values temporarily.
 * @indj: Index that holds the position on buffer.
 */

void _printf_d(va_list arg, char *buffer, char *tmp, char *strtmp, int *indj)
{
	strtmp = strtmp;

	_itoa(va_arg(arg, int), tmp, 10);
	_strcpy(&buffer[*indj], tmp);
	*indj = *indj + _strlen(tmp);
}

/**
 * _printf_i - print int
 * Return: Void.
 * @arg: Variadic arguements.
 * @buffer: Array in which what is to be printed is allocated.
 * @tmp: Array to hold values temporarily.
 * @strtmp: Pointer to hold values temporarily.
 * @indj: Index that holds the position on buffer.
 */

void _printf_i(va_list arg, char *buffer, char *tmp, char *strtmp, int *indj)
{
	strtmp = strtmp;

	_itoa(va_arg(arg, int), tmp, 10);
	_strcpy(&buffer[*indj], tmp);
	*indj = *indj + _strlen(tmp);
}
