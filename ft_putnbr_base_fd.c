#include "libftprintf.h"

void	ft_putnbr_base_fd(unsigned int num, int base, char specifier, int fd)
{
	char *digits;

	if (specifier == 'X')
		digits = "0123456789ABCDEF";
	else
		digits = "123456789abcdef";
	if (num >= (unsigned int) base)
		ft_putnbr_base_fd(num / base, base, specifier, fd);
	write(fd, &digits[num % base], 1);
}
