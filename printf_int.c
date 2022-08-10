#include "main.h"

/**
 * print_int - prints an integer
 * @argument: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of printed characters
 */
int printf_int(va_list arguments, char *buf, unsigned int ibuf)
{
	int int_input;
	unsigned int int_in, temp_int, i, div, neg_int;

	int_input = va_arg(arguments, int);
	neg_int = 0;
	if (int_input < 0)
	{
		int_in = int_input * -1;
		ibuf = handle_buf(buf, '-', ibuf);
		neg_int = 1;
	}
	else
	{
		int_in = int_input;
	}

	temp_int = int_in;
	div = 1;

	while(temp_int > 9)
	{
		div *= 10;
		temp_int /= 10;
	}

	for (i = 0; div > 0; div /= 10, i++)
	{
		ibuf = handle_buf(buf, ((int_in / div) % 10) + '0', ibuf);
	}
	return (i + neg_int);
}
