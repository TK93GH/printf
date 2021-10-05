#include "main.h"

/**
 * print_rev - print the reversed string
 *
 * Return ();
 */
char *print_rev(va_list list)
{
	char *rev, *str, *s, *p;
	int len, i = 0;

	str = va_arg(list, char *)
		if (str == NULL)
			str = "(NULL)";

	len = _strlen(str);

	rev = malloc(sizeof(char) * len + 1);
	if (rev == NULL)
		return (NULL);

	rev[i] = '\0';
	return (rev);

	// add loop condition here
	// added print reverse string validation but missing condition
}
