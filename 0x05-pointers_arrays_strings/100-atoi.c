#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: the string to be converted.
 *
 * Return: the converted integer.
 */

int _atoi(char *s)
{
	int sign = 1, result = 0, i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			result = (result * 10) + (s[i] - '0');
		else if (result > 0)
			break;
		i++;
	}
	return (result * sign);
}
