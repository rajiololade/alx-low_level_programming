#include "main.h"
/**
 *print_alphabet_x10 _Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void);
{
	char ch;
	int p;

	p = 0;

	while (p < 10)
	{
	ch = 'a';

		while (ch <= 'z')
	{

		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	p++;
	}
}
