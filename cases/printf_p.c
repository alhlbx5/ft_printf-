/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:37:43 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/16 11:38:06 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void printf_p(va_list list)
{
	unsigned long x = (unsigned long)va_arg(list, void *);
	write(1, "0x", 2);
	ft_putnbr_hex(x);
}
