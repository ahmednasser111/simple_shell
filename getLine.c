#include "shell.h"

/**
<<<<<<< HEAD
 * input_buf - buffers chained commands
 * @info: parameter struct
 * @buf: address of buffer
 * @len: address of len var
 *
=======
 * input_buf - buffers
 * @info: parameter
 * @buf: address
 * @len: address
>>>>>>> be46ba4902239822dc85b7e3a33d30cfb3f9af72
 * Return: bytes read
 */
ssize_t input_buf(info_t *info, char **buf, size_t *len)
{
	ssize_t r = 0;
	size_t len_p = 0;

<<<<<<< HEAD
	if (!*len) /* if nothing left in the buffer, fill it */
	{
		/*bfree((void **)info->cmd_buf);*/
=======
	if (!*len)
	{
>>>>>>> be46ba4902239822dc85b7e3a33d30cfb3f9af72
		free(*buf);
		*buf = NULL;
		signal(SIGINT, sigintHandler);
#if USE_GETLINE
		r = getline(buf, &len_p, stdin);
#else
		r = _getline(info, buf, &len_p);
#endif
		if (r > 0)
		{
			if ((*buf)[r - 1] == '\n')
			{
<<<<<<< HEAD
				(*buf)[r - 1] = '\0'; /* remove trailing newline */
=======
				(*buf)[r - 1] = '\0';
>>>>>>> be46ba4902239822dc85b7e3a33d30cfb3f9af72
				r--;
			}
			info->linecount_flag = 1;
			remove_comments(*buf);
			build_history_list(info, *buf, info->histcount++);
<<<<<<< HEAD
			/* if (_strchr(*buf, ';')) is this a command chain? */
=======
>>>>>>> be46ba4902239822dc85b7e3a33d30cfb3f9af72
			{
				*len = r;
				info->cmd_buf = buf;
			}
		}
	}
	return (r);
}

/**
 * get_input - gets a line minus the newline
 * @info: parameter struct
 *
 * Return: bytes read
 */
ssize_t get_input(info_t *info)
{
<<<<<<< HEAD
	static char *buf; /* the ';' command chain buffer */
=======
	static char *buf;
>>>>>>> be46ba4902239822dc85b7e3a33d30cfb3f9af72
	static size_t i, j, len;
	ssize_t r = 0;
	char **buf_p = &(info->arg), *p;

	_putchar(BUF_FLUSH);
	r = input_buf(info, &buf, &len);
<<<<<<< HEAD
	if (r == -1) /* EOF */
		return (-1);
	if (len)	/* we have commands left in the chain buffer */
	{
		j = i; /* init new iterator to current buf position */
		p = buf + i; /* get pointer for return */

		check_chain(info, buf, &j, i, len);
		while (j < len) /* iterate to semicolon or end */
=======
	if (r == -1)
		return (-1);
	if (len)
	{
		j = i;
		p = buf + i;

		check_chain(info, buf, &j, i, len);
		while (j < len)
>>>>>>> be46ba4902239822dc85b7e3a33d30cfb3f9af72
		{
			if (is_chain(info, buf, &j))
				break;
			j++;
		}

<<<<<<< HEAD
		i = j + 1; /* increment past nulled ';'' */
		if (i >= len) /* reached end of buffer? */
		{
			i = len = 0; /* reset position and length */
			info->cmd_buf_type = CMD_NORM;
		}

		*buf_p = p; /* pass back pointer to current command position */
		return (_strlen(p)); /* return length of current command */
	}

	*buf_p = buf; /* else not a chain, pass back buffer from _getline() */
	return (r); /* return length of buffer from _getline() */
=======
		i = j + 1;
		if (i >= len)
		{
			i = len = 0;
			info->cmd_buf_type = CMD_NORM;
		}

		*buf_p = p;
		return (_strlen(p));
	}

	*buf_p = buf;
	return (r);
>>>>>>> be46ba4902239822dc85b7e3a33d30cfb3f9af72
}

/**
 * read_buf - reads a buffer
 * @info: parameter struct
 * @buf: buffer
 * @i: size
 *
 * Return: r
 */
ssize_t read_buf(info_t *info, char *buf, size_t *i)
{
	ssize_t r = 0;

	if (*i)
		return (0);
	r = read(info->readfd, buf, READ_BUF_SIZE);
	if (r >= 0)
		*i = r;
	return (r);
}

/**
<<<<<<< HEAD
 * _getline - gets the next line of input from STDIN
 * @info: parameter struct
 * @ptr: address of pointer to buffer, preallocated or NULL
 * @length: size of preallocated ptr buffer if not NULL
=======
 * _getline - gets the next line
 * @info: parameter
 * @ptr: address of pointer to buffer
 * @length: size of preallocated ptr
>>>>>>> be46ba4902239822dc85b7e3a33d30cfb3f9af72
 *
 * Return: s
 */
int _getline(info_t *info, char **ptr, size_t *length)
{
	static char buf[READ_BUF_SIZE];
	static size_t i, len;
	size_t k;
	ssize_t r = 0, s = 0;
	char *p = NULL, *new_p = NULL, *c;

	p = *ptr;
	if (p && length)
		s = *length;
	if (i == len)
		i = len = 0;

	r = read_buf(info, buf, &len);
	if (r == -1 || (r == 0 && len == 0))
		return (-1);

	c = _strchr(buf + i, '\n');
	k = c ? 1 + (unsigned int)(c - buf) : len;
	new_p = _realloc(p, s, s ? s + k : k + 1);
	if (!new_p) /* MALLOC FAILURE! */
		return (p ? free(p), -1 : -1);

	if (s)
		_strncat(new_p, buf + i, k - i);
	else
		_strncpy(new_p, buf + i, k - i + 1);

	s += k - i;
	i = k;
	p = new_p;

	if (length)
		*length = s;
	*ptr = p;
	return (s);
}

/**
<<<<<<< HEAD
 * sigintHandler - blocks ctrl-C
 * @sig_num: the signal number
 *
 * Return: void
 */
void sigintHandler(__attribute__((unused))int sig_num)
=======
 * sigintHandler - block ctrl+C
 * @sig_num: signal
 * Return: void
 */
void sigintHandler(__attribute__((unused)) int sig_num)
>>>>>>> be46ba4902239822dc85b7e3a33d30cfb3f9af72
{
	_puts("\n");
	_puts("$ ");
	_putchar(BUF_FLUSH);
}
