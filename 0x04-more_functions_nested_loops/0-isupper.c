#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if the letters are uppercase
 * @c: input.
 * Return: 1 if c is uppercase
 * 0 otherwise.
 */

int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
