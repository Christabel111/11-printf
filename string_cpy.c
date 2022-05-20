#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * Return: Character copied from the first string to the second
 * @dest: Pointer to the string to be copied
 * @src: Pointer to the buffer where the string is to be pasted
 */

char *_strcpy(char *dest, char *src)
{
	int c = 0;

	for (; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	dest[c] = '\0';
	return (dest);
}
