/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:48:11 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/22 20:39:58 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_hex_upper(unsigned long long n, int *count)
{
    char *hex;    

    hex =  "0123456789ABCDEF";
    if (n >= 16)
    {
        ft_putnbr_hex_upper(n / 16, count);
        ft_putnbr_hex_upper(n % 16, count);
    }
    else
        *count += write(1, &hex[n], 1);

    return (0);
}
