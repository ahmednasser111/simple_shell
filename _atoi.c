#include "shell.h"

/**
 * interactive - returns true if shell is interactive mode
 * @i: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int interactive(info_t *i)
{
	return (isatty(STDIN_FILENO) && i->readfd <= 2);
}

/**
 * is_delim - checks if character is a delimeter
 * @ch: the char to check
 * @delim: the delimeter string
 * Return: 1 if true, 0 if false
 */
int is_delim(char ch, char *delim)
{
	while (*delim)
		if (*delim++ == ch)
			return (1);
	return (0);
}

/**
 *_isalpha - checks for alphabetic character
 *@x: The character to input
 *Return: 1 if c is alphabetic, 0 otherwise
 */

int _isalpha(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
		return (1);
	return (0);
}

/**
 *_atoi - converts a string to an integer
 *@s: the string to be converted
 *Return: 0 if no numbers in string
 */

int _atoi(char *str)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; str[i] != '\0' && flag != 2; i++)
	{
		if (str[i] == '-')
			sign *= -1;

		if (str[i] >= '0' && str[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
