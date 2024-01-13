/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:12:24 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/13 16:01:55 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr_hex(unsigned long long n)
{
    char *hex;
    
    hex = "0123456789abcdef";
    if (n >= 16)
    {
        ft_putnbr_hex(n / 16);
        ft_putnbr_hex(n % 16);
    }
    else
        write(1, &hex[n], 1);
}
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