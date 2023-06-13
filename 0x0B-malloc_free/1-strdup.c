#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string allocated
 * with a space in memory which is a duplicate of the string str
 * @str: String to duplicate
 *
 * Return: Pointer to the duplicated string, NULL if insufficient
 * memory was available
 */

char *_strdup(char *str)
{
	char *myStr;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	myStr = malloc(sizeof(*str) * (len + 1));

	if (myStr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		myStr[i] = str[i];

	return (myStr);
}
