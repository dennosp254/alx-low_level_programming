#include "main.h"
/**
  * _strchr - locates a character in a string.
  * @s: source string
  * @c: tested character
  * Return: pointer to 1st occurence of the character in the string
  * otherwise return NULL if character not found
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
