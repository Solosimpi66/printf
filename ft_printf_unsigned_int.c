#include "libftprintf.h"

unsigned int	ft_printf_unsigned_int(const char **ptr, va_list args, int fd)
{
	unsigned int num;

	num = va_arg(args, unsigned int);

	if (**ptr == 'u')
		ft_putnbr_base_fd(num, 10, 'u', fd);
	else if (**ptr == 'x')
		ft_putnbr_base_fd(num, 16, 'x', fd);
	else if (**ptr == 'X')
		ft_putnbr_base_fd(num, 16, 'X', fd);
	(*ptr)++;
	return (0);
}
