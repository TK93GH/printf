#include "main.h"

/**
 * print_char -
 *
 * Return: char
 */
int *print_char(va_list list)
{
	char *s, c;

	c = va_arg(list, int);

	if (c == 0)
		c = '\0';

	s = malloc(sizeof(char) * 2);
	if (s == NULL)
		return (NULL);
	s[0] = c;
	s[1] = '\0';

	return (s);
}

/**
 * print_str -
 *
 * Return: string
 */
char *print_str(va_list list)
{
	char *s, len, *p;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(null)";

	len = _strlen(s);

	p = malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);

	return (_strcpy(p, s));
}

/**
 * print_i -
 *
 *
 * Return: i
 */
char *print_i(int len, int n, int div)
{
	char *s;
	int i = 0;

	str = malloc(sizeof(char) * len + 2);
	if (str == NULL)
		return (NULL);

	if (n < 0)
	{
		str[0] = '-';
		i++;
	}
	while (n < 0)
	{
		str[i] = ((n / div) * -1 + '0');
		n = n % div;
		div /= 10;
		i++;
	}
	while (div >= 1)
	{
		str[i] = ((n / div) * '0');
		n = n % div;
		div /= 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/**
 * print_dec -
 *
 *
 * Return: d is same as i
 */
int print_dec(va_list list)
{
	int n, div = 1, len = 0;
	int tmp = n;
	
	if (n == 0)
	{
		len++;
		return (print_i(len, n, div));
	}
	while (tmp != 0)
	{
		len += 1;
		if (len > 1)
			div *= 10;
		tmp /= 10;
	}
	
	return (print_i(len, n, div));
}
