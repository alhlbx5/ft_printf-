/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_x_upper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:39:26 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/16 11:50:27 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr_hex_upper(unsigned long long n)
{
    char *hex;
    
    hex =  "0123456789ABCDEF";
    if (n >= 16)
    {
        ft_putnbr_hex_upper(n / 16);
        ft_putnbr_hex_upper(n % 16);
    }
    else
        write(1, &hex[n], 1);
}

void printf_x_upper(va_list list)
{
	unsigned int x = va_arg(list, unsigned int);
	ft_putnbr_hex_upper(x);
}	
