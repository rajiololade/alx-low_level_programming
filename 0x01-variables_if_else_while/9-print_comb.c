#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void) /* The code should return an integer*/

{
	int m; /* Declaring the character*/

	for (m = 48; m < 58; m++)

	{
		putchar(m); /*main function*/

		if (m != 57)
	{
		putchar(',');

		putchar(' ');


	}

	}
		putchar('\n');

	return (0);
}
