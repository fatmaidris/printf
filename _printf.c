#include "main.h"
/**
* _printf - custom printf.
* @format: string contain the specifires.
* Return: number of printed characters.
*/
int _printf(const char *format, ...)
{
	va_list args;
	int l = 0;
	char x, *st;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				_putchar('%');
				l++;
			}
			else if (*format == 'c')
			{
				x = va_arg(args, int);
				_putchar(x);
				l++;
			}
			else if (*format == 's')
			{
				st = va_arg(args, char *);
				while (*st)
				{
					_putchar(*st);
					st++;
					l++;
			}}}

		else
		{
			_putchar(*format);
			l++;
		}
		format++;
	}
	va_end(args);
	return (l);
}
