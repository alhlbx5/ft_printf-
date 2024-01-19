#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int ft_printf(const char *c, ...);
void	read_case(char	*c, va_list list);
void	printf_c(va_list list);
void	printf_s(va_list list);
void	printf_p(va_list list);
void	printf_d(va_list list);
void	printf_i(va_list list);
void	printf_u(va_list list);
void	printf_x(va_list list);
void	printf_x_upper(va_list list);
int		printf_percent(int count);

#endif