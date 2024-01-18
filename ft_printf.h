/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:43:47 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/16 16:25:57 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
# include "libft/libft.h"

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
void	printf_percent(va_list list);
void	ft_putnbr_hex(unsigned long long n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar(char c, int *count)
void	ft_putstr(char *s, int *count);

#endif