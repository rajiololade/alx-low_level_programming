#include <stdio.h>
#include <main.h>
/**
 * _memset -Entry point
 * @s: is the starting address of memory to be filled
 * @b: the desired value
 * @n: size of byte to be changed
 *
 * Return: Always (0) success
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}
