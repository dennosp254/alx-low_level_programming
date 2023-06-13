#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: First string to concatenate
 * @s2: Second string to concatenate
 *
 * Return: Pointer to a string of the concatenated strings,
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0, j = 0;
	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		str[k] = s1[k];

	for (k = 0; k < j; k++)
		str[k + i] = s2[k];

	str[i + j] = '\0';

	return (str);
}
