#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints out the last part of a qoute in the standard error.
 * Return: l if success.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
