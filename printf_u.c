/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:38:55 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/16 11:39:13 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void printf_u(va_list list)
{
	unsigned int x = va_arg(list, unsigned int);
	ft_putnbr_fd(x, 1);
}
