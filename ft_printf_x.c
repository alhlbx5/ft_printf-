/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:42:56 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/20 17:14:17 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_hex(unsigned long long n)
{
    char *hex;
    int count;

    count = 0;
    hex = "0123456789abcdef";
    if (n >= 16)
    {
        ft_putnbr_hex(n / 16);
        ft_putnbr_hex(n % 16);
    }
    else
        count += write(1, &hex[n], 1);
    return (count);
}
int printf_x(va_list list)
{
	unsigned int x = va_arg(list, unsigned int);
	return (ft_putnbr_hex(x));
}
