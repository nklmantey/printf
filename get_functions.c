#include "main.h"
/**
 * get_functions - get specifier
 * @x: variable for the specific func
 * Return: function
 */
int (*get_functions(char x))(va_list)
{
	int i = 0;
	spec arr[] = {
		{"c", handle_c},
		{"s", handle_s},
		{"%", handle_percent},
		{NULL, NULL}
	};
	while (arr[i].valid)
	{
		if (x == arr[i].valid[0])
		{
			return (arr[i].f);
		}
		i++;
	}
	return (NULL)
}
