/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:37:43 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/23 17:45:30 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_p(va_list list, int *count)
{
	unsigned long	x;

	x = (unsigned long)va_arg(list, void *);
	*count += write(1, "0x", 2);
	*count += ft_putnbr_hex(x, count);
	return (0);
}
