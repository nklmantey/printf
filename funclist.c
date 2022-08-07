#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * handle_c - print character
 * @args: character argument
 * Return: character count
 */
int handle_c(va_list args)
{
	int c;

	c = va_args(args, int);
	return (_putchar(c));
}
/**
 * handle_s - print string
 * @args: string argument
 * Return: string count
 */
int handle_s(va_list args)
{
	int i = 0;
	count = 0;
	char *string;

	string = va_args(args, char*);
	if (string == NULL)
	{
		string = "empty";
	}
	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
		count++;
	}
	return (count);
}
/**
 * handle_percent - pass percent as string
 * @args: string argument
 * Return: return percent as a string
 */
int handle_percent(va_list args)
{
	char *string;

	string = "%";
	if (va_arg(args, int) == *string)
	{
		return (*string);
	}
	return (*string)
}
