#include "main.h"

/**
 * get_func - returns key function
 * @i - identifier
 * Return: pointer to key fey functions
 */
char* (*get_func(char i))(va_list)
{
	int k = 0;

	print keys[] = {
		{'c', print_c},
		{'s', print_str},
		{'d', print_d},
		{'i', print_d},
		{'\0', NULL}
	};

	while (keys.[k].id != '\0')
	{
		if (keys[keys].id == i)
			return (keys[k].func);
		k++;
	}
	return (NULL);
}
