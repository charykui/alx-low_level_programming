#include "main.h"

/**
* _strcat - a function that concatinates two strings
* @src: string one
* @dest: string two
* Return: returns concatenated strings
*/
char *_strcat(char *dest, char *src)
{
	char *dest, *src;

	length = 0;

	while (s1[length] != '\0')
	{
		++length;
	}
	for (j = 0; s2[j] != '\0'; ++j, ++length)
	{
		s1[length] = s2[j];
	}

	s1[length] = '\0';
	puts(s1);
	return (s1);
}
