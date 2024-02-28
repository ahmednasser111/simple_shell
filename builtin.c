#include "shell.h"

/**
<<<<<<< HEAD
 * _myexit - exits the shell
 * @info: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
 *  Return: exits with a given exit status
 *         (0) if info.argv[0] != "exit"
=======
 * _myexit - exit
 * @info: Structure containing potential arguments.
 *  Return: exits with a given exit status
>>>>>>> be46ba4902239822dc85b7e3a33d30cfb3f9af72
 */
int _myexit(info_t *info)
{
	int exitcheck;

<<<<<<< HEAD
	if (info->argv[1])  /* If there is an exit arguement */
=======
	if (info->argv[1])
>>>>>>> be46ba4902239822dc85b7e3a33d30cfb3f9af72
	{
		exitcheck = _erratoi(info->argv[1]);
		if (exitcheck == -1)
		{
			info->status = 2;
			print_error(info, "Illegal number: ");
			_eputs(info->argv[1]);
			_eputchar('\n');
			return (1);
		}
		info->err_num = _erratoi(info->argv[1]);
		return (-2);
	}
	info->err_num = -1;
	return (-2);
}

/**
<<<<<<< HEAD
 * _mycd - changes the current directory of the process
 * @info: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
=======
 * _mycd - changes the current directory
 * @info: Structure containing potential arguments.
>>>>>>> be46ba4902239822dc85b7e3a33d30cfb3f9af72
 *  Return: Always 0
 */
int _mycd(info_t *info)
{
	char *s, *dir, buffer[1024];
	int chdir_ret;

	s = getcwd(buffer, 1024);
	if (!s)
		_puts("TODO: >>getcwd failure emsg here<<\n");
	if (!info->argv[1])
	{
		dir = _getenv(info, "HOME=");
		if (!dir)
<<<<<<< HEAD
			chdir_ret = /* TODO: what should this be? */
				chdir((dir = _getenv(info, "PWD=")) ? dir : "/");
=======
			chdir_ret = chdir((dir = _getenv(info, "PWD=")) ? dir : "/");
>>>>>>> be46ba4902239822dc85b7e3a33d30cfb3f9af72
		else
			chdir_ret = chdir(dir);
	}
	else if (_strcmp(info->argv[1], "-") == 0)
	{
		if (!_getenv(info, "OLDPWD="))
		{
			_puts(s);
			_putchar('\n');
			return (1);
		}
		_puts(_getenv(info, "OLDPWD=")), _putchar('\n');
<<<<<<< HEAD
		chdir_ret = /* TODO: what should this be? */
			chdir((dir = _getenv(info, "OLDPWD=")) ? dir : "/");
=======
		chdir_ret = chdir((dir = _getenv(info, "OLDPWD=")) ? dir : "/");
>>>>>>> be46ba4902239822dc85b7e3a33d30cfb3f9af72
	}
	else
		chdir_ret = chdir(info->argv[1]);
	if (chdir_ret == -1)
	{
		print_error(info, "can't cd to ");
		_eputs(info->argv[1]), _eputchar('\n');
	}
	else
	{
		_setenv(info, "OLDPWD", _getenv(info, "PWD="));
		_setenv(info, "PWD", getcwd(buffer, 1024));
	}
	return (0);
}

/**
<<<<<<< HEAD
 * _myhelp - changes the current directory of the process
 * @info: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
=======
 * _myhelp - ...
 * @info: Structure.
>>>>>>> be46ba4902239822dc85b7e3a33d30cfb3f9af72
 *  Return: Always 0
 */
int _myhelp(info_t *info)
{
	char **arg_array;

	arg_array = info->argv;
	_puts("help call works. Function not yet implemented \n");
	if (0)
<<<<<<< HEAD
		_puts(*arg_array); /* temp att_unused workaround */
=======
		_puts(*arg_array);
>>>>>>> be46ba4902239822dc85b7e3a33d30cfb3f9af72
	return (0);
}
