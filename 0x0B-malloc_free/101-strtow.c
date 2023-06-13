#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be counted.
 *
 * Return: The number of words in str.
 */

int count_words(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		if (*str != ' ')
		{
			count++;
			while (*str != ' ' && *str != '\0')
				str++;
		}
		else
			str++;
	}

	return (count);
}

/**
 * word_length - computes the length of a string
 * @str: string to determine it length
 *
 * Return: Length of str
 */

int word_length(char *str)
{
	int len = 0;

	while (*str != ' ' && *str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * strtow - splits a string into words
 * @str: String to split
 *
 * Return: Pointer to an array of strings, NULL on failure
 */

char **strtow(char *str)
{
	char **words;
	int i, j, num_words, word_len;

	if (str == NULL || strlen(str) == 0)
		return (NULL);

	num_words = count_words(str);
	words = malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	i = 0;
	while (*str != '\0')
	{
		while (*str == ' ')
			str++;

		if (*str == '\0')
			break;

		word_len = word_length(str);
		words[i] = malloc((word_len + 1) * sizeof(char));

		if (words[i] == NULL)
			return (NULL);

		for (j = 0; j < word_len; j++)
			words[i][j] = *(str++);
		words[i][word_len] = '\0';
		i++;
	}
	words[i] = NULL;

	return (words);
}
