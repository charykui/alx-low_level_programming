#include "main.h"
#include <stdio.h> 
/**
  * *_strchr - function
  * @s:input value
  * @c: input two
  */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
