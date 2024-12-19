#include "libftprintf.h"

int	ft_printf_int(const char **ptr, va_list args, int fd)
{
	int	num;

	num = va_arg(args, int);
	ft_putnbr_fd(num, fd);
	(*ptr)++;
	return (0);
}
