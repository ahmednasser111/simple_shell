#include "shell.h"

/**
 * interactive - is shell interactive mode
 * @i: struct address
 *
 * Return: true if interactive mode, else false
 */
int interactive(info_t *i)
{
	return (isatty(STDIN_FILENO) && i->readfd <= 2);
}

/**
 * is_delim - character is a delimeter
 * @ch: char
 * @de: delimeter
 * Return: 1 if true, 0 if false
 */
int is_delim(char ch, char *de)
{
	while (*de)
		if (*de++ == ch)
			return (1);
	return (0);
}

/**
 *_isalpha - alphabetic character
 *@ch: The character to input
 *Return: if c is alphabetic
 */

int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	return (0);
}

/**
 *_atoi - converts a string to an integer
 *@s: the string to be converted
 *Return: 0 if no numbers in string, converted number otherwise
 */

int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
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
