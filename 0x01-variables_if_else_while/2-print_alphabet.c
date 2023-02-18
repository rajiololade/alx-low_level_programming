#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void) /* The code should return an integer*/

{
	char alphabet; /* Declaring the character*/

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++) /* The for loop condition to print a-z by increamenting a-z by 1*/

	{
		putchar(alphabet,"\n"); /*main function*/
	}

	return (0);
}
