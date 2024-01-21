/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:12:24 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/20 16:24:47 by aalhalab         ###   ########.fr       */
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
int ft_putnbr_hex_upper(unsigned long long n)
{
    char *hex;
    int count;
    
    count = 0;
    hex =  "0123456789ABCDEF";
    if (n >= 16)
    {
        ft_putnbr_hex_upper(n / 16);
        ft_putnbr_hex_upper(n % 16);
    }
    else
        count += write(1, &hex[n], 1);

    return (count);
}