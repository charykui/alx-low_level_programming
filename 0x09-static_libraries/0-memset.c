#include "main.h"

/**
 * *_memset - function
 * @s: value 1
 * @b: value2
 * @n: integer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);

}
