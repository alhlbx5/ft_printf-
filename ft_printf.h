#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
# include "libft/libft.h"

int ft_printf(const char *c, ...);
void	read_case(char	*c, va_list list);
void execute_char(va_list list);
void execute_string(va_list list);
void execute_int(va_list list);
void execute_unsigned_int(va_list list);
void execute_pointer(va_list list);
void execute_hex(va_list list);
void execute_hex_upper(va_list list);
void execute_percent(void);
void ft_putnbr_hex(unsigned long long n);
void ft_putnbr_hex_upper(unsigned long long n);

#endif