#include "shell.h"

/**
<<<<<<< HEAD
 * interactive - returns true if shell is interactive mode
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if character is a delimeter
 * @c: the char to check
 * @delim: the delimeter string
 * Return: 1 if true, 0 if false
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
=======
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
>>>>>>> be46ba4902239822dc85b7e3a33d30cfb3f9af72
			return (1);
	return (0);
}

/**
<<<<<<< HEAD
 *_isalpha - checks for alphabetic character
 *@c: The character to input
 *Return: 1 if c is alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
=======
 *_isalpha - alphabetic character
 *@ch: The character to input
 *Return: if c is alphabetic
 */

int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	return (0);
>>>>>>> be46ba4902239822dc85b7e3a33d30cfb3f9af72
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

<<<<<<< HEAD
	for (i = 0;  s[i] != '\0' && flag != 2; i++)
=======
	for (i = 0; s[i] != '\0' && flag != 2; i++)
>>>>>>> be46ba4902239822dc85b7e3a33d30cfb3f9af72
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
<<<<<<< HEAD

=======
>>>>>>> be46ba4902239822dc85b7e3a33d30cfb3f9af72
