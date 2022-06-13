#include "main.h"

/**
 * _strlen -a is a function that prints lenght of a string
 * @s: thee length
 * Return: return the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
