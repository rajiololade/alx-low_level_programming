#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void) /* The code should return an integer*/

{
	char alphabet; /* Declaring the character*/

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)

	{
		putchar(alphabet); /*main function*/
	}
		putchar('\n');

	return (0);
}
