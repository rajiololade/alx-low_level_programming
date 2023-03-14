#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: part of an argument
 * @argv:array of the argument
 *
 * Return: Always 0 (Success)
 */

int main(int argc_attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
