#include "shell.h"

/**
<<<<<<< HEAD
 * bfree - frees a pointer and NULLs the address
 * @ptr: address of the pointer to free
 *
 * Return: 1 if freed, otherwise 0.
=======
 * bfree - frees pointer
 * @ptr: pointer
 *
 * Return: is freed.
>>>>>>> be46ba4902239822dc85b7e3a33d30cfb3f9af72
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
