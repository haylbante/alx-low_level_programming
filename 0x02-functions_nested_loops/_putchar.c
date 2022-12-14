$include <unistd.h>
/**
 * _putchar.c
 * * c: The character to print
 * Retrun: on success l.
 * */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
