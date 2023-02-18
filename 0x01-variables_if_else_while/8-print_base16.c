#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void) /* The code should return an integer*/

{
	char alphabet; /* Declaring the character*/
	int n;

	for (n = 48; n <= 58; n++)
	{
		putchar(n);
	}

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)

	{
		putchar(alphabet); /*main function*/
	}
		putchar('\n');

	return (0);
}
