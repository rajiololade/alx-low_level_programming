#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: 0 always(Success/correct)
 */
int main(void)
{
	char small_letter;
	char capital_letter;

		for (small_letter = 'a'; small_letter <= 'z'; small_letter++)
			
		{
			putchar(small_letter);
		}

		for (capital_letter = 'A'; capital_letter <= 'Z'; capital_letter++)

		{
			putchar(capital_letter);
		}

	putchar('\n');
}
