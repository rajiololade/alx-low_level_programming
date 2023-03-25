#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 * @separator: The string to be printed between numbers
 *
 * Otherwise - the sum of all parameters.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);

		if (str == NULL)

		printf("(nil)");

		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
