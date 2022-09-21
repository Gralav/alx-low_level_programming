#include "main.h"

/**
 * _strncpy - copies string, up to n bytes
 * @dest: destination str to copy into
 * @src: string to copy to dest
 * @n: number of bytes to copy from src
 *
 * Return: char pointer to beginning of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
