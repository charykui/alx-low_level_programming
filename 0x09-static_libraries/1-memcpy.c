#include "main.h"
 /**
  * *_memcpy - function
  * @dest: dest
  * @src: source
  * @n: int
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
