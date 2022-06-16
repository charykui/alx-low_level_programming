#include "main.h"

/**
* _strcat - a function that concatinates two strings
* @src: string one
* @dest: string twio
* Return: returns concatenated strings
*/
char *_strcat(char *dest, char *src)
{
	int i,j;

	i = 0;

	while(dest[i] != '\0')
	{
		++i;
	}
	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}

	dest[j] = '\0';
	return (dest);
}
