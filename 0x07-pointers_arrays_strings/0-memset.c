#include "main.h"

/**
 * _memset - concantenates two strings
 * @s: pointer
 * @b: constant byte
 * @n: n bytes of a memory
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unasigned int i;

	for (i = 0; i < n; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
