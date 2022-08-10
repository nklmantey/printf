#include "main.h"

/**
 * print_buf - prints buffer
 * @buf: buffer pointer
 * @nbuf: number of bytes to be printed
 * Return: number of printed bytes
 */
int print_buf(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
