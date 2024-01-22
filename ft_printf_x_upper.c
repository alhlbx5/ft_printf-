/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x_upper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:39:26 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/22 20:44:10 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_x_upper(va_list list, int *count)
{
	unsigned int x = va_arg(list, unsigned int);
	return(ft_putnbr_hex_upper(x, count));
}	
