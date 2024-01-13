/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:17:06 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/13 16:00:26 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void execute_int(va_list list)
{
	int x = va_arg(list, int);
	ft_putnbr_fd(x, 1);
}
void execute_unsigned_int(va_list list)
{
	unsigned int x = va_arg(list, unsigned int);
	ft_putnbr_fd(x, 1);
}
void execute_pointer(va_list list)
{
	unsigned long x = (unsigned long)va_arg(list, void *);
	write(1, "0x", 2);
	ft_putnbr_hex(x);
}
void execute_hex(va_list list)
{
	unsigned int x = va_arg(list, unsigned int);
	ft_putnbr_hex(x);
}

void execute_hex_upper(va_list list)
{
	unsigned int x = va_arg(list, unsigned int);
	ft_putnbr_hex_upper(x);
}	

