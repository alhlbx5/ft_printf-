/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:11:56 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/23 17:41:07 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *format, ...);
int	ft_printf_c(va_list list, int *count);
int	ft_printf_s(va_list list, int *count);
int	ft_printf_p(va_list list, int *count);
int	ft_printf_d(va_list list, int *count);
int	ft_printf_u(va_list list, int *count);
int	ft_printf_x(va_list list, int *count);
int	ft_printf_x_upper(va_list list, int *count);
int	ft_putnbr_fd(long long int n, int fd, int *count);
int	ft_putnbr_hex(unsigned long long n, int *count);
int	ft_putnbr_hex_upper(unsigned long long n, int *count);

#endif