#ifndef LIBFTPRINTF_H

# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const	char *, ...);
int	ft_printf_int(const char **ptr, va_list args, int fd);
unsigned int	ft_printf_unsigned_int(const char **ptr, va_list args, int fd);
int	ft_printf_another(const char **ptr, va_list args, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr_base_fd(unsigned int num, int base, char specifier, int fd);
int	main(void);

#endif
