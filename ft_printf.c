#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	const char *ptr;
	int fd;

	fd = 1;
	ptr = format;
	while (*ptr)
	{
		if (*ptr == '%' && *(ptr + 1))
		{
			ptr++;
			if (*ptr == 'c' || *ptr == 'd' || *ptr == 'i')
				ft_printf_int(&ptr, args, fd);
			else if (*ptr == 'u' || *ptr == 'x' || *ptr == 'X')
				ft_printf_unsigned_int(&ptr, args, fd);
			else if (*ptr == 'p' || *ptr == 's' || *ptr == '%')
				ft_printf_another(&ptr, args, fd);
		}
		else
			ft_putchar_fd(*ptr++, fd);
	}
	va_end(args);
	return (0);
}
