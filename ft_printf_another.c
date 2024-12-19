#include "libftprintf.h"

int	ft_printf_another(const char **ptr, va_list args, int fd)
{
	if (**ptr == 'p')
	{
		void *address = va_arg(args, void *);
		if (!address)
			write(fd, "(null)", 6);
		else
		{
			write(1, "0x", 2);
			ft_putnbr_base_fd((unsigned long)address, 16, 'x', fd);
		}
	}
	else if (**ptr == 's')
	{
		const char *str = va_arg(args, const char *);
		if (!str)
			write(1, "(null)", 6);
		else
		{
			while (*str)
				write(fd, str++, 1);
		}
	}
		else if (**ptr == '%')
			write(fd, "%", 1);
		(*ptr)++;
		return (0);
}
