#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strlen -  Function that returns the length of a string.
 * Return: Lenght of the string.
 * @s: String to whose length is to be computed
 */

int _strlen(char *s)
{
	int l;

	for (l = 0; s[l] != '\0' && s[l + 1] != '\0'; l++)
	{
	}
	return (l);
}
